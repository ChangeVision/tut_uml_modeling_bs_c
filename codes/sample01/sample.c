#include "sample.h" // <1>

/* Sample構造体の初期化（インスタンスの作成） */
void sample_init(Sample *sample) {  // <2>
    sample->attr_a = true;  // <3>
    sample->attr_b = true;  // <3>
    /* 状態の初期化は後で追加 */
}

/* playメソッドの実装 */
void sample_play(Sample *sample) {  // <4>
    /* 振る舞いは後で実装 */
    printf("play called attr_a:%d\n", sample->attr_a);
}
