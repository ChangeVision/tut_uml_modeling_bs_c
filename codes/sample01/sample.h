#ifndef SAMPLE_H
#define SAMPLE_H

#include <stdio.h>
#include <stdbool.h>

typedef struct {  // <1>
    bool attr_a;  // <2>
    bool attr_b;  // <2>
    /* 状態変数は後で追加 */
} Sample;

/* メソッドにあたる関数のプロトタイプ宣言 */
void sample_init(Sample *sample);  // <3>
void sample_play(Sample *sample);  // <4>

#endif /* SAMPLE_H */
