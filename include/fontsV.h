// шрифты для вывода текста
const uint8_t fontVar[][6] PROGMEM = {
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x14}, //   0x20 32 0
	{0x00, 0x6f, 0x00, 0x00, 0x00, 0x83}, // ! 0x21 33 1
	{0x07, 0x00, 0x07, 0x00, 0x00, 0x83}, // " 0x22 34 2
	{0x14, 0x7f, 0x14, 0x7f, 0x14, 0x85}, // # 0x23 35 3
	{0x2E, 0x2A, 0x7F, 0x2A, 0x3A, 0x85}, // $ 0x24 36 4
	{0x23, 0x13, 0x08, 0x64, 0x62, 0x85}, // % 0x25 37 5
	{0x36, 0x49, 0x56, 0x20, 0x50, 0x85}, // & 0x26 38 6
	{0x07, 0x00, 0x00, 0x00, 0x00, 0x81}, // ' 0x27 39 7
	{0x1c, 0x22, 0x41, 0x00, 0x00, 0x83}, // ( 0x28 40 8
	{0x41, 0x22, 0x1c, 0x00, 0x00, 0x83}, // ) 0x29 41 9
	{0x14, 0x08, 0x3e, 0x08, 0x14, 0x85}, // * 0x2a 42 10
	{0x08, 0x08, 0x3e, 0x08, 0x08, 0x85}, // + 0x2b 43 11
	{0xa0, 0x60, 0x00, 0x00, 0x00, 0x82}, // , 0x2c 44 12
	{0x08, 0x08, 0x08, 0x08, 0x08, 0x85}, // - 0x2d 45 13
	{0x60, 0x60, 0x00, 0x00, 0x00, 0x82}, // . 0x2e 46 14
	{0x20, 0x10, 0x08, 0x04, 0x02, 0x85}, // / 0x2f 47 15
	{0x3e, 0x51, 0x49, 0x45, 0x3e, 0x85}, // 0 0x30 48 16
	{0x00, 0x42, 0x7f, 0x40, 0x00, 0x85}, // 1 0x31 49 17
	{0x42, 0x61, 0x51, 0x49, 0x46, 0x85}, // 2 0x32 50 18
	{0x21, 0x41, 0x45, 0x4b, 0x31, 0x85}, // 3 0x33 51 19
	{0x18, 0x14, 0x12, 0x7f, 0x10, 0x85}, // 4 0x34 52 20
	{0x27, 0x45, 0x45, 0x45, 0x39, 0x85}, // 5 0x35 53 21
	{0x3c, 0x4a, 0x49, 0x49, 0x30, 0x85}, // 6 0x36 54 22
	{0x01, 0x71, 0x09, 0x05, 0x03, 0x85}, // 7 0x37 55 23
	{0x36, 0x49, 0x49, 0x49, 0x36, 0x85}, // 8 0x38 56 24
	{0x06, 0x49, 0x49, 0x29, 0x1e, 0x85}, // 9 0x39 57 25
	{0x00, 0x36, 0x36, 0x00, 0x00, 0x84}, // : 0x3a 58 26
	{0x56, 0x36, 0x00, 0x00, 0x00, 0x82}, // ; 0x3b 59 27
	{0x08, 0x14, 0x22, 0x41, 0x00, 0x84}, // < 0x3c 60 28
	{0x14, 0x14, 0x14, 0x14, 0x14, 0x84}, // = 0x3d 61 29
	{0x41, 0x22, 0x14, 0x08, 0x00, 0x84}, // > 0x3e 62 30
	{0x02, 0x01, 0x51, 0x09, 0x06, 0x85}, // ? 0x3f 63 31
	{0x3e, 0x41, 0x5d, 0x49, 0x4e, 0x85}, // @ 0x40 64 32
	{0x7e, 0x09, 0x09, 0x09, 0x7e, 0x85}, // A 0x41 65 33
	{0x7f, 0x49, 0x49, 0x49, 0x36, 0x85}, // B 0x42 66 34
	{0x3e, 0x41, 0x41, 0x41, 0x22, 0x85}, // C 0x43 67 35
	{0x7f, 0x41, 0x41, 0x41, 0x3e, 0x85}, // D 0x44 68 36
	{0x7f, 0x49, 0x49, 0x41, 0x49, 0x84}, // E 0x45 69 37
	{0x7f, 0x09, 0x09, 0x01, 0x09, 0x84}, // F 0x46 70 38
	{0x3e, 0x41, 0x49, 0x49, 0x7a, 0x85}, // G 0x47 71 39
	{0x7f, 0x08, 0x08, 0x08, 0x7f, 0x85}, // H 0x48 72 40
	{0x41, 0x7f, 0x41, 0x00, 0x00, 0x83}, // I 0x49 73 41
	{0x20, 0x40, 0x41, 0x3f, 0x01, 0x85}, // J 0x4a 74 42
	{0x7f, 0x08, 0x14, 0x22, 0x41, 0x85}, // K 0x4b 75 43
	{0x7f, 0x40, 0x40, 0x40, 0x40, 0x84}, // L 0x4c 76 44
	{0x7f, 0x02, 0x0c, 0x02, 0x7f, 0x85}, // M 0x4d 77 45
	{0x7f, 0x04, 0x08, 0x10, 0x7f, 0x85}, // N 0x4e 78 46
	{0x3e, 0x41, 0x41, 0x41, 0x3e, 0x85}, // O 0x4f 79 47
	{0x7f, 0x09, 0x09, 0x09, 0x06, 0x85}, // P 0x50 80 48
	{0x3e, 0x41, 0x51, 0x21, 0x5e, 0x85}, // Q 0x51 81 49
	{0x7f, 0x09, 0x19, 0x29, 0x46, 0x85}, // R 0x52 82 50
	{0x46, 0x49, 0x49, 0x49, 0x31, 0x85}, // S 0x53 83 51
	{0x01, 0x01, 0x7f, 0x01, 0x01, 0x85}, // T 0x54 84 52
	{0x3f, 0x40, 0x40, 0x40, 0x3f, 0x85}, // U 0x55 85 53
	{0x0f, 0x30, 0x40, 0x30, 0x0f, 0x85}, // V 0x56 86 54
	{0x3f, 0x40, 0x30, 0x40, 0x3f, 0x85}, // W 0x57 87 55
	{0x63, 0x14, 0x08, 0x14, 0x63, 0x85}, // X 0x58 88 56
	{0x07, 0x08, 0x70, 0x08, 0x07, 0x85}, // Y 0x59 89 57
	{0x61, 0x51, 0x49, 0x45, 0x43, 0x85}, // Z 0x5a 90 58
	{0x7f, 0x41, 0x00, 0x00, 0x00, 0x82}, // [ 0x5b 91 59
	{0x02, 0x04, 0x08, 0x10, 0x20, 0x85}, // \ 0x5c 92 60
	{0x41, 0x7f, 0x00, 0x00, 0x00, 0x82}, // ] 0x5d 93 61
	{0x04, 0x02, 0x01, 0x02, 0x04, 0x85}, // ^ 0x5e 94 62
	{0x40, 0x40, 0x40, 0x40, 0x40, 0x84}, // _ 0x5f 95 63
	{0x03, 0x04, 0x00, 0x00, 0x00, 0x82}, // ` 0x60 96 64
	{0x20, 0x54, 0x54, 0x78, 0x54, 0x84}, // a 0x61 97 65
	{0x7f, 0x44, 0x44, 0x38, 0x48, 0x84}, // b 0x62 98 66
	{0x38, 0x44, 0x44, 0x28, 0x20, 0x84}, // c 0x63 99 67
	{0x38, 0x44, 0x44, 0x7f, 0x48, 0x84}, // d 0x64 100 68
	{0x38, 0x54, 0x54, 0x18, 0x54, 0x84}, // e 0x65 101 69
	{0x08, 0x7e, 0x09, 0x01, 0x02, 0x83}, // f 0x66 102 70
	{0x18, 0xA4, 0xA4, 0x7C, 0x94, 0x84}, // g 0x67 103 71
	{0x7f, 0x08, 0x04, 0x78, 0x04, 0x84}, // h 0x68 104 72
	{0x7D, 0x00, 0x00, 0x00, 0x00, 0x81}, // i 0x69 105 73
	{0x40, 0x3d, 0x80, 0x7D, 0x00, 0x82}, // j 0x6a 106 74
	{0x7f, 0x10, 0x28, 0x44, 0x00, 0x84}, // k 0x6b 107 75
	{0x3F, 0x40, 0x00, 0x00, 0x00, 0x82}, // l 0x6c 108 76
	{0x7c, 0x04, 0x18, 0x04, 0x78, 0x85}, // m 0x6d 109 77
	{0x7c, 0x08, 0x04, 0x78, 0x04, 0x84}, // n 0x6e 110 78
	{0x38, 0x44, 0x44, 0x38, 0x44, 0x84}, // o 0x6f 111 79
	{0xFC, 0x24, 0x24, 0x18, 0x14, 0x84}, // p 0x70 112 80
	{0x18, 0x24, 0x24, 0xFC, 0x28, 0x84}, // q 0x71 113 81
	{0x7c, 0x08, 0x04, 0x08, 0x00, 0x84}, // r 0x72 114 82
	{0x48, 0x54, 0x54, 0x24, 0x00, 0x84}, // s 0x73 115 83
	{0x04, 0x3f, 0x44, 0x40, 0x20, 0x83}, // t 0x74 116 84
	{0x3c, 0x40, 0x20, 0x7c, 0x00, 0x84}, // u 0x75 117 85
	{0x1c, 0x20, 0x40, 0x20, 0x1c, 0x85}, // v 0x76 118 86
	{0x3c, 0x40, 0x30, 0x40, 0x3c, 0x85}, // w 0x77 119 87
	{0x44, 0x28, 0x10, 0x28, 0x44, 0x85}, // x 0x78 120 88
	{0x1C, 0xA0, 0xA0, 0x7C, 0xA0, 0x84}, // y 0x79 121 89
	{0x44, 0x64, 0x54, 0x4c, 0x44, 0x85}, // z 0x7a 122 90
	{0x08, 0x36, 0x41, 0x41, 0x00, 0x83}, // { 0x7b 123 91
	{0x77, 0x00, 0x00, 0x00, 0x00, 0x81}, // | 0x7c 124 92
	{0x41, 0x36, 0x08, 0x00, 0x41, 0x83}, // } 0x7d 125 93
	{0x04, 0x02, 0x04, 0x08, 0x04, 0x85}, // ~ 0x7e 126 94

	{0x7C, 0x12, 0x11, 0x12, 0x7C, 0x85}, // А 0xd090 95
	{0x7F, 0x49, 0x49, 0x49, 0x71, 0x85}, // Б 96
	{0x7f, 0x49, 0x49, 0x49, 0x36, 0x85}, // В 97
	{0x7F, 0x01, 0x01, 0x01, 0x01, 0x84}, // Г 98
	{0x60, 0x3E, 0x21, 0x3F, 0x60, 0x85}, // Д 99
	{0x7f, 0x49, 0x49, 0x41, 0x49, 0x84}, // Е 100
	{0x77, 0x08, 0x7F, 0x08, 0x77, 0x85}, // Ж 101
	{0x22, 0x41, 0x49, 0x55, 0x22, 0x85}, // З 102
	{0x7F, 0x20, 0x10, 0x08, 0x7F, 0x85}, // И 103
	{0x7E, 0x20, 0x11, 0x08, 0x7E, 0x85}, // Й 104
	{0x7f, 0x08, 0x14, 0x22, 0x41, 0x85}, // К 105
	{0x70, 0x0E, 0x01, 0x01, 0x7F, 0x85}, // Л 106
	{0x7f, 0x02, 0x0c, 0x02, 0x7f, 0x85}, // М 107
	{0x7f, 0x08, 0x08, 0x08, 0x7f, 0x85}, // Н 108
	{0x3e, 0x41, 0x41, 0x41, 0x3e, 0x85}, // О 109
	{0x7F, 0x01, 0x01, 0x01, 0x7F, 0x85}, // П 110
	{0x7f, 0x09, 0x09, 0x09, 0x06, 0x85}, // Р 111
	{0x3e, 0x41, 0x41, 0x41, 0x22, 0x85}, // С 112
	{0x01, 0x01, 0x7f, 0x01, 0x01, 0x85}, // Т 113
	{0x07, 0x48, 0x28, 0x18, 0x07, 0x85}, // У 114
	{0x1C, 0x22, 0x7F, 0x22, 0x1C, 0x85}, // Ф 115
	{0x63, 0x14, 0x08, 0x14, 0x63, 0x85}, // Х 116
	{0x7F, 0x40, 0x40, 0x7F, 0xC0, 0x85}, // Ц 117
	{0x07, 0x08, 0x08, 0x08, 0x7F, 0x85}, // Ч 118
	{0x7F, 0x40, 0x7F, 0x40, 0x7F, 0x85}, // Ш 119
	{0x7F, 0x40, 0x7F, 0x40, 0xFF, 0x85}, // Щ 120
	{0x01, 0x7F, 0x48, 0x48, 0x70, 0x85}, // Ъ 121
	{0x7F, 0x48, 0x70, 0x00, 0x7F, 0x85}, // Ы 122
	{0x7F, 0x48, 0x48, 0x70, 0x00, 0x84}, // Ь 123
	{0x22, 0x41, 0x49, 0x49, 0x3E, 0x85}, // Э 124
	{0x7F, 0x08, 0x3E, 0x41, 0x3E, 0x85}, // Ю 125
	{0x46, 0x29, 0x19, 0x09, 0x7F, 0x85}, // Я 0xd0af 126
	{0x20, 0x54, 0x54, 0x78, 0x54, 0x84}, // a 0xd0b0 127
	{0x3c, 0x4a, 0x49, 0x31, 0x49, 0x84}, // б 128
	{0x7c, 0x54, 0x54, 0x28, 0x54, 0x84}, // в 129
	{0x7c, 0x04, 0x04, 0x04, 0x04, 0x83}, // г 130
	{0xC0, 0x78, 0x44, 0x7C, 0xC0, 0x85}, // д 131
	{0x38, 0x54, 0x54, 0x18, 0x54, 0x84}, // e 132
	{0x6c, 0x10, 0x7c, 0x10, 0x6c, 0x85}, // ж 133
	{0x44, 0x54, 0x54, 0x28, 0x40, 0x84}, // з 134
	{0x7C, 0x20, 0x10, 0x7C, 0x00, 0x84}, // и 135
	{0x7C, 0x21, 0x11, 0x7C, 0x00, 0x84}, // й 136
	{0x7c, 0x10, 0x28, 0x44, 0x20, 0x84}, // к 137
	{0x40, 0x38, 0x04, 0x7C, 0x00, 0x84}, // л 138
	{0x7c, 0x08, 0x10, 0x08, 0x7c, 0x85}, // м 139
	{0x7c, 0x10, 0x10, 0x7c, 0x10, 0x84}, // н 140
	{0x38, 0x44, 0x44, 0x38, 0x44, 0x84}, // o 141
	{0x7c, 0x04, 0x04, 0x7c, 0x04, 0x84}, // п 0xd0bf 142
	{0xFC, 0x24, 0x24, 0x18, 0x24, 0x84}, // p 0xd180 143
	{0x38, 0x44, 0x44, 0x28, 0x40, 0x84}, // c 144
	{0x04, 0x7c, 0x04, 0x04, 0x04, 0x83}, // т 145
	{0x1C, 0xA0, 0xA0, 0x7C, 0xA0, 0x84}, // у 146
	{0x38, 0x44, 0xFE, 0x44, 0x38, 0x85}, // ф 147
	{0x44, 0x28, 0x10, 0x28, 0x44, 0x85}, // x 148
	{0x3C, 0x40, 0x40, 0x7C, 0xC0, 0x85}, // ц 149
	{0x0c, 0x10, 0x10, 0x7c, 0x10, 0x84}, // ч 150
	{0x7c, 0x40, 0x7c, 0x40, 0x7c, 0x85}, // ш 151
	{0x7c, 0x40, 0x7c, 0x40, 0xfc, 0x85}, // щ 152
	{0x04, 0x7c, 0x50, 0x50, 0x20, 0x85}, // ъ 153
	{0x7C, 0x50, 0x70, 0x00, 0x7C, 0x85}, // ы 154
	{0x7c, 0x50, 0x50, 0x20, 0x00, 0x84}, // ь 155
	{0x28, 0x44, 0x54, 0x38, 0x54, 0x84}, // э 156
	{0x7c, 0x10, 0x38, 0x44, 0x38, 0x85}, // ю 157
	{0x58, 0x34, 0x14, 0x7C, 0x00, 0x84}, // я 0xd18f 158

	{0x7C, 0x55, 0x54, 0x45, 0x44, 0x85}, // Ё 0xd081 159
	{0x38, 0x55, 0x54, 0x55, 0x08, 0x85}, // ё 0xd191 160

	{0x3E, 0x49, 0x49, 0x41, 0x22, 0x85}, // Є 0xd084 161
	{0xFF, 0x81, 0x99, 0x81, 0xFF, 0x85}, // ¤ 0xd085 162
	{0x41, 0x7F, 0x41, 0x00, 0x00, 0x83}, // I 0xd086 163
	{0x41, 0x7E, 0x41, 0x00, 0x00, 0x83}, // Ї 0xd087 164
	{0x38, 0x54, 0x54, 0x44, 0x44, 0x84}, // є 0xd194 165
	{0x4C, 0x54, 0x64, 0x00, 0x00, 0x83}, // s 0xd195 166
	{0x7D, 0x00, 0x00, 0x00, 0x00, 0x81}, // i 0xd196 167
	{0x01, 0x7C, 0x01, 0x00, 0x00, 0x83}, // ї 0xd197 168
	{0x7E, 0x02, 0x02, 0x02, 0x03, 0x85}, // Ґ 0xd290 169
	{0x7C, 0x04, 0x04, 0x06, 0x04, 0x84}, // ґ 0xd291 170
	{0x06, 0x09, 0x06, 0x00, 0x00, 0x83}, // ° 0xb0 171
};
