/*ANSI Escape Sequence

\033[<�Ӽ�1>;<�Ӽ�2>;...;<�Ӽ�N]m
���·� ����Ѵ�.

ex > \033[31m: ������

\033 �Ǵ� \x1b: �̽������� ���� (ESC)


[: �̽������� �������� ������ �˸��� ����

�Ӽ�1, �Ӽ�2, ...: �Ӽ� �ڵ�(����, ��Ÿ�� ��)

m: �������� ���Ḧ ��Ÿ���� ����


ANSI Escape Sequence �ؽ�Ʈ �����ڵ�

�����ڵ�

���� (Black)30

���� (Red)31

�ʷ� (Green)32

��� (Yellow)33

�Ķ� (Blue)34

���� (Magenta)35

û�� (Cyan)36

��� (White)37

���� ���� (Bright Black)90

���� ���� (Bright Red)91

���� �ʷ� (Bright Green)92

���� ��� (Bright Yellow)93

���� �Ķ� (Bright Blue)94

���� ���� (Bright Magenta)95

���� û�� (Bright Cyan)96

���� ��� (Bright White)97



ANSI Escape Sequence ��� �����ڵ�

���� (Black)40

���� (Red)41

�ʷ� (Green)42

��� (Yellow)43

�Ķ� (Blue)44

���� (Magenta)45

û�� (Cyan)46

��� (White)47

���� ���� (Bright Black)100

���� ���� (Bright Red)101

���� �ʷ� (Bright Green)102

���� ��� (Bright Yellow)103

���� �Ķ� (Bright Blue)104

���� ���� (Bright Magenta)105

���� û�� (Bright Cyan)106

���� ��� (Bright White)107


ANSI Escape Sequence ��Ÿ�� �ڵ�

�⺻ ��Ÿ�� (Reset)0

���� �۾� (Bold)1

���� (Underline)4

�����̴� �ؽ�Ʈ (Blink)5

������ ���� (Inverse)7

������ �ؽ�Ʈ (Strike-through)9



//���տ���

// ���� ������ �ؽ�Ʈ, �Ķ��� ���, ���� �۾�

printf("\033[91;44;1mBright red text with blue background and bold.\033[0m\n");



// �ʷϻ� �ؽ�Ʈ, ����� ���, ����

printf("\033[32;43;4mGreen text with yellow background and underline.\033[0m\n");



// ���� û�ϻ� �ؽ�Ʈ, ���� �Ķ��� ���, ������ ����

printf("\033[96;104;7mBright cyan text with bright blue background and inverted colors.\033[0m\n"*/