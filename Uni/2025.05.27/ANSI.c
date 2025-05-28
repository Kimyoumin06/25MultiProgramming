/*ANSI Escape Sequence

\033[<속성1>;<속성2>;...;<속성N]m
형태로 사용한다.

ex > \033[31m: 빨간색

\033 또는 \x1b: 이스케이프 문자 (ESC)


[: 이스케이프 시퀀스의 시작을 알리는 문자

속성1, 속성2, ...: 속성 코드(색상, 스타일 등)

m: 시퀀스의 종료를 나타내는 문자


ANSI Escape Sequence 텍스트 색상코드

색상코드

검정 (Black)30

빨강 (Red)31

초록 (Green)32

노랑 (Yellow)33

파랑 (Blue)34

자주 (Magenta)35

청록 (Cyan)36

흰색 (White)37

밝은 검정 (Bright Black)90

밝은 빨강 (Bright Red)91

밝은 초록 (Bright Green)92

밝은 노랑 (Bright Yellow)93

밝은 파랑 (Bright Blue)94

밝은 자주 (Bright Magenta)95

밝은 청록 (Bright Cyan)96

밝은 흰색 (Bright White)97



ANSI Escape Sequence 배경 색상코드

검정 (Black)40

빨강 (Red)41

초록 (Green)42

노랑 (Yellow)43

파랑 (Blue)44

자주 (Magenta)45

청록 (Cyan)46

흰색 (White)47

밝은 검정 (Bright Black)100

밝은 빨강 (Bright Red)101

밝은 초록 (Bright Green)102

밝은 노랑 (Bright Yellow)103

밝은 파랑 (Bright Blue)104

밝은 자주 (Bright Magenta)105

밝은 청록 (Bright Cyan)106

밝은 흰색 (Bright White)107


ANSI Escape Sequence 스타일 코드

기본 스타일 (Reset)0

굵은 글씨 (Bold)1

밑줄 (Underline)4

깜박이는 텍스트 (Blink)5

반전된 색상 (Inverse)7

지워진 텍스트 (Strike-through)9



//종합예제

// 밝은 빨간색 텍스트, 파란색 배경, 굵은 글씨

printf("\033[91;44;1mBright red text with blue background and bold.\033[0m\n");



// 초록색 텍스트, 노란색 배경, 밑줄

printf("\033[32;43;4mGreen text with yellow background and underline.\033[0m\n");



// 밝은 청록색 텍스트, 밝은 파란색 배경, 반전된 색상

printf("\033[96;104;7mBright cyan text with bright blue background and inverted colors.\033[0m\n"*/