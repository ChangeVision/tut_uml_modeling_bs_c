#include "sample.h" // <1>

int main(void) {
    Sample smpl01;               // <2>
    sample_init(&smpl01);        // <3>
    sample_play(&smpl01);        // <4>
}
