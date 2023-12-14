#include <stdint.h>

struct SegyHeader {
  char filename[80];
  char format[2];
  char date[12];
  char time[12];
  float sample_rate;
  int n_traces;
  int n_samples;
  int offset_samples;
  int gain;
  int source_type;
  int receiver_type;
  int data_type;
  int trace_headers_size;
  int trace_data_size;
};
