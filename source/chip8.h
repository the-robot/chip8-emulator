#pragma once

#include <cstdint>
#include <random>

const unsigned int KEY_COUNT = 16;
const unsigned int MEMORY_SIZE = 4096;
const unsigned int REGISTER_COUNT = 16;
const unsigned int STACK_LEVELS = 16;
const unsigned int VIDEO_HEIGHT = 32;
const unsigned int VIDEO_WIDTH = 64;


class Chip8 {
public:
    Chip8();
    void LoadROM(char const *filename);

private:
    uint8_t registers[REGISTER_COUNT]{};
    uint8_t memory[MEMORY_SIZE]{};
    uint16_t index{};
    uint16_t pc{}; // program counter
    uint16_t stack[16];
    uint8_t sp{};
    uint8_t delayTimer{};
    uint8_t soundTimer{};
    uint8_t keypad[16]{};
    uint8_t video[64 * 32]{};
    uint8_t opcode;
};
