#ifndef BRAILLE_H
#define BRAILLE_H

static const char *braille[4][2] = {
  {"⠁","⠈"},
  {"⠂","⠐"},
  {"⠄","⠠"},
  {"⡀","⢀"},
};

static const char *bbraille[2][2]
                           [2][2]
                           [2][2]
                           [2][2] =
{{{{{{{{"","⢀",},{"⡀","⣀",},},{{"⠠","⢠",},{"⡠","⣠",},},},{{{"⠄","⢄",},{"⡄","⣄",},},{{"⠤","⢤",},{"⡤","⣤",},},},},{{{{"⠐","⢐",},{"⡐","⣐",},},{{"⠰","⢰",},{"⡰","⣰",},},},{{{"⠔","⢔",},{"⡔","⣔",},},{{"⠴","⢴",},{"⡴","⣴",},},},},},{{{{{"⠂","⢂",},{"⡂","⣂",},},{{"⠢","⢢",},{"⡢","⣢",},},},{{{"⠆","⢆",},{"⡆","⣆",},},{{"⠦","⢦",},{"⡦","⣦",},},},},{{{{"⠒","⢒",},{"⡒","⣒",},},{{"⠲","⢲",},{"⡲","⣲",},},},{{{"⠖","⢖",},{"⡖","⣖",},},{{"⠶","⢶",},{"⡶","⣶",},},},},},},{{{{{{"⠈","⢈",},{"⡈","⣈",},},{{"⠨","⢨",},{"⡨","⣨",},},},{{{"⠌","⢌",},{"⡌","⣌",},},{{"⠬","⢬",},{"⡬","⣬",},},},},{{{{"⠘","⢘",},{"⡘","⣘",},},{{"⠸","⢸",},{"⡸","⣸",},},},{{{"⠜","⢜",},{"⡜","⣜",},},{{"⠼","⢼",},{"⡼","⣼",},},},},},{{{{{"⠊","⢊",},{"⡊","⣊",},},{{"⠪","⢪",},{"⡪","⣪",},},},{{{"⠎","⢎",},{"⡎","⣎",},},{{"⠮","⢮",},{"⡮","⣮",},},},},{{{{"⠚","⢚",},{"⡚","⣚",},},{{"⠺","⢺",},{"⡺","⣺",},},},{{{"⠞","⢞",},{"⡞","⣞",},},{{"⠾","⢾",},{"⡾","⣾",},},},},},},},{{{{{{{"⠁","⢁",},{"⡁","⣁",},},{{"⠡","⢡",},{"⡡","⣡",},},},{{{"⠅","⢅",},{"⡅","⣅",},},{{"⠥","⢥",},{"⡥","⣥",},},},},{{{{"⠑","⢑",},{"⡑","⣑",},},{{"⠱","⢱",},{"⡱","⣱",},},},{{{"⠕","⢕",},{"⡕","⣕",},},{{"⠵","⢵",},{"⡵","⣵",},},},},},{{{{{"⠃","⢃",},{"⡃","⣃",},},{{"⠣","⢣",},{"⡣","⣣",},},},{{{"⠇","⢇",},{"⡇","⣇",},},{{"⠧","⢧",},{"⡧","⣧",},},},},{{{{"⠓","⢓",},{"⡓","⣓",},},{{"⠳","⢳",},{"⡳","⣳",},},},{{{"⠗","⢗",},{"⡗","⣗",},},{{"⠷","⢷",},{"⡷","⣷",},},},},},},{{{{{{"⠉","⢉",},{"⡉","⣉",},},{{"⠩","⢩",},{"⡩","⣩",},},},{{{"⠍","⢍",},{"⡍","⣍",},},{{"⠭","⢭",},{"⡭","⣭",},},},},{{{{"⠙","⢙",},{"⡙","⣙",},},{{"⠹","⢹",},{"⡹","⣹",},},},{{{"⠝","⢝",},{"⡝","⣝",},},{{"⠽","⢽",},{"⡽","⣽",},},},},},{{{{{"⠋","⢋",},{"⡋","⣋",},},{{"⠫","⢫",},{"⡫","⣫",},},},{{{"⠏","⢏",},{"⡏","⣏",},},{{"⠯","⢯",},{"⡯","⣯",},},},},{{{{"⠛","⢛",},{"⡛","⣛",},},{{"⠻","⢻",},{"⡻","⣻",},},},{{{"⠟","⢟",},{"⡟","⣟",},},{{"⠿","⢿",},{"⡿","⣿",},},},},},},},};

#endif /* BRAILLE_H */
