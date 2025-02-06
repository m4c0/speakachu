#pragma leco tool
#pragma leco add_include_dir "espeak-ng/src/include"
#pragma leco add_impl common

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

