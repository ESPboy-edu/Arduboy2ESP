#pragma once

namespace Images {
    
    const uint8_t PROGMEM Title_00[] = {
    #ifndef DEBUG
    20, 14,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
    };
    #else
    0x00 ,0x07, 0x3d
    };
    #endif  

    const uint8_t PROGMEM Title_01[] = {
    6, 1,
    0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 
    };

    const uint8_t PROGMEM Title_02[] = {
    #ifndef DEBUG
    118, 24,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0x70, 0x70, 0x38, 0x38, 0x18, 0x0c, 0x0c, 0x0e, 0x0e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x38, 0x0c, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xf8, 0x7e, 0x0f, 0x07, 0x01, 0xc0, 0xe0, 0x78, 0x1e, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 
    0x20, 0x20, 0x70, 0x70, 0x78, 0x78, 0x7c, 0x7c, 0x7e, 0x7e, 0x7e, 0x7f, 0x7f, 0x7b, 0x7b, 0x39, 0x39, 0x39, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x90, 0xce, 0xfe, 0x38, 0xbc, 0xde, 0xe6, 0xf2, 0xfc, 0xee, 0xe7, 0x73, 0x3b, 0x3e, 0x1e, 0xce, 0xe6, 0xfa, 0xfc, 0xde, 0xde, 0xda, 0xda, 0x5a, 0x5a, 0x0a, 0xc2, 0xfa, 0xfc, 0x3e, 0x76, 0x72, 0x72, 0xfa, 0xfa, 0xde, 0xde, 0xce, 0x86, 0x86, 0x86, 0x84, 0xe0, 0xf8, 0x3e, 0x0f, 0x07, 0x85, 0xe4, 0xfc, 0x7c, 0x1f, 0xc7, 0xe3, 0xf8, 0xfe, 0x3e, 0x4e, 0xe6, 0xfe, 0x7e, 0xe6, 0xf8, 0xfc, 0x9e, 0x82, 0xc2, 0x86, 0xc6, 0xf8, 0x7c, 0x3e, 0x3f, 0x7b, 0x7c, 0xec, 0xe4, 0xc6, 0x86, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x30, 0x18, 0x0c, 0x0f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x11, 0x1e, 0x0f, 0x03, 0x01, 0x10, 0x1c, 0x1e, 0x0f, 0x07, 0x01, 0x00, 0x00, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x06, 0x04, 0x0c, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 
    };
    #else
    0x00 ,0x07, 0x3d
    };
    #endif  

    const uint8_t PROGMEM UpDown[] = {
    10, 5,
    0x10, 0x1c, 0x1f, 0x1c, 0x10, 0x01, 0x07, 0x1f, 0x07, 0x01, 
    };

    const uint8_t PROGMEM Cathode[] = {
    3, 3,
    0x02, 0x05, 0x02, 
    };

};