# This project has moved
Due to it morphing from a starter project into an actual engine, it is moving to [muon](https://github.com/howardliam/muon)

# Vulkan SDL3 Starter Project
A starter project for game engine/games built on SDL3 using Vulkan for graphics API.

## Todo
- [x] Initial Vulkan setup
- [x] Model loading*
- [x] Texture loading
- [ ] Game object wrapper
- [ ] Camera
- [ ] Good base render system as an example
- [ ] User input handling
- [ ] Audio (OpenAL)

\* Model loading only without indices.

## Requirements
- SDL3
- Vulkan
- glm
- spdlog

## Build instructions
```
git clone https://github.com/howardliam/vulkan-sdl3-starter
cd vulkan-sdl3-starter
mkdir build
cd build
cmake -G Ninja ..
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=YES .
cd ..
cmake --build build
./build/vulkan-sdl3-starter
```

## Additional thanks to
- [STB](https://github.com/nothings/stb)
- [tinyobjloader](https://github.com/tinyobjloader/tinyobjloader)
- [entt](https://github.com/skypjack/entt)
