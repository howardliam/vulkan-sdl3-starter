#pragma once

#include <unordered_map>
#include <vector>

#include <SDL3/SDL_scancode.h>
#include <SDL3/SDL_events.h>

class InputManager {
public:
    void process_event(SDL_Event &event);
    void update();

    bool is_key_pressed(SDL_Scancode key) const;
    bool is_key_released(SDL_Scancode key) const;
private:
    std::unordered_map<SDL_Scancode, bool> current_keys;
    std::unordered_map<SDL_Scancode, bool> previous_keys;

    std::vector<SDL_Scancode> keys_pressed_this_frame;
    std::vector<SDL_Scancode> keys_released_this_frame;
};
