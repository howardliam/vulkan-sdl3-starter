#include "inputmanager.hpp"

#include <algorithm>

void InputManager::process_event(SDL_Event &event) {
    if (event.type == SDL_EVENT_KEY_DOWN && !event.key.repeat) {
        current_keys[event.key.scancode] = true;
        keys_pressed_this_frame.push_back(event.key.scancode);
    } else if (event.type == SDL_EVENT_KEY_UP) {
        current_keys[event.key.scancode] = false;
        keys_released_this_frame.push_back(event.key.scancode);
    }
}

void InputManager::update() {
    previous_keys = current_keys;
    keys_pressed_this_frame.clear();
    keys_released_this_frame.clear();
}

bool InputManager::is_key_pressed(SDL_Scancode key) const {
    return std::find(keys_pressed_this_frame.begin(), keys_pressed_this_frame.end(), key)!= keys_pressed_this_frame.end();
}

bool InputManager::is_key_released(SDL_Scancode key) const {
    return std::find(keys_released_this_frame.begin(), keys_released_this_frame.end(), key)!= keys_released_this_frame.end();
}
