#include "sample.h" // <1>

// tag::sample_init[]
void sample_init(Sample *sample) {
    sample->attr_a = true;
    sample->attr_b = true;
    sample->state = ST0; // <1>
}
// end::sample_init[]
// tag::sample_st0_proc[]
static void st0_proc(Sample *sample, SampleEvent evt, int param) {
    switch (evt) {  // <1>
        case EV1:  // <2>
            if (gd1(sample)) {  // <3>
                act1(sample, evt, param);  // <4>
                sample->state = ST1;  // <5>
            } else {
                printf("Event ignored due to guard condition\n");  // <6>
            }
            break;
        case EV3:  // <7>
            act3(sample, evt, param);
            sample->state = ST0;
            break;
        default:
            /* その他のイベントは無視 */
            break;
    }
}
// end::sample_st0_proc[]
// tag::sample_st1_proc[]
static void st1_proc(Sample *sample, SampleEvent evt, int param) {
    switch (evt) {  // <1>
        case EV1:  // <2>
            if (gd1(sample)) {  // <3>
                act1(sample, evt, param);  // <4>
                sample->state = ST1;  // <5>
            } else {
                printf("Event ignored due to guard condition\n");  // <6>
            }
            break;
        case EV3:  // <7>
            act3(sample, evt, param);
            sample->state = ST0;
            break;
        default:
            /* その他のイベントは無視 */
            break;
    }
}
// end::sample_st1_proc[]
// tag::sample_play[]
void sample_play(Sample *sample, SampleEvent evt, int param) {
    switch (sample->state) {  // <1>
        case ST0:  // <2>
            st0_proc(sample, evt, param);  // <3>
            break;
        case ST1:
            st1_proc(sample, evt, param);
            break;
        case ST2:
            st2_proc(sample, evt, param);
            break;
    }
}
// end::sample_play[]
