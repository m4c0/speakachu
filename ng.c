#pragma leco tool
#pragma leco add_include_dir "."
#pragma leco add_include_dir "espeak-ng/src/include"
#pragma leco add_impl common

#include <espeak-ng/espeak_ng.h>
#include <espeak-ng/speak_lib.h>

int main() {
  const char * data_path = NULL;
  espeak_ng_InitializePath(data_path);

  espeak_ng_ERROR_CONTEXT context = NULL;
  espeak_ng_CompilePhonemeData(22050, stdout, &context);
}

#include "espeak-ng/src/libespeak-ng/compiledata.c"
#include "espeak-ng/src/libespeak-ng/ieee80.c"
#include "espeak-ng/src/libespeak-ng/phoneme.c"
#include "espeak-ng/src/libespeak-ng/spect.c"

