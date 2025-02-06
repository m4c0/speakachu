#pragma leco tool
#pragma leco add_include_dir "."
#pragma leco add_include_dir "espeak-ng/src/include"
#pragma leco add_include_dir "espeak-ng/src/ucd-tools/src/include"

#define HAVE_MKSTEMP 1
#define PATH_ESPEAK_DATA "/tmp/"

#include <espeak-ng/speak_lib.h>

int main() {
  int buflen = 500;

  espeak_AUDIO_OUTPUT output = AUDIO_OUTPUT_SYNCH_PLAYBACK;
  espeak_Initialize(output, buflen, NULL, 0);

  const char language[] = { "English" };
  espeak_SetVoiceByName(language);

  void * user_data = NULL;
  unsigned int * ident = NULL;
  const char text[] = { "Hello world!" };
  espeak_Synth(text, buflen, 0, 0, 0, espeakCHARS_AUTO, ident, user_data);
}

#include "espeak-ng/src/libespeak-ng/common.c"
#include "espeak-ng/src/libespeak-ng/mnemonics.c"
#include "espeak-ng/src/libespeak-ng/langopts.c"
#include "espeak-ng/src/libespeak-ng/compiledict.c"
#include "espeak-ng/src/libespeak-ng/dictionary.c"
#include "espeak-ng/src/libespeak-ng/encoding.c"
#include "espeak-ng/src/libespeak-ng/error.c"
#include "espeak-ng/src/libespeak-ng/espeak_api.c"
#include "espeak-ng/src/libespeak-ng/intonation.c"
#include "espeak-ng/src/libespeak-ng/numbers.c"
#include "espeak-ng/src/libespeak-ng/phonemelist.c"
#include "espeak-ng/src/libespeak-ng/readclause.c"
#include "espeak-ng/src/libespeak-ng/setlengths.c"
#include "espeak-ng/src/libespeak-ng/soundicon.c"
#include "espeak-ng/src/libespeak-ng/speech.c"
#include "espeak-ng/src/libespeak-ng/ssml.c"
#include "espeak-ng/src/libespeak-ng/synthdata.c"
#include "espeak-ng/src/libespeak-ng/synthesize.c"
#include "espeak-ng/src/libespeak-ng/tr_languages.c"
#include "espeak-ng/src/libespeak-ng/translate.c"
#include "espeak-ng/src/libespeak-ng/translateword.c"
#include "espeak-ng/src/libespeak-ng/voices.c"
#include "espeak-ng/src/libespeak-ng/wavegen.c"
#include "espeak-ng/src/ucd-tools/src/case.c"
#include "espeak-ng/src/ucd-tools/src/categories.c"
#include "espeak-ng/src/ucd-tools/src/proplist.c"
