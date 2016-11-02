
#define IDLE 0
#define STARWARS 1
#define YAKETY 2
#define AXELF 3
#define MISSIONIMPOSSIBLE 4

short playing;

task AxelF()
{
  //        125 = Tempo
  //          5 = Default octave
  //    Quarter = Default note length
  //        10% = Break between notes
  //
  playing = AXELF;
  playTone(  783,   43); wait1Msec( 480);  // Note(G)
  playTone(  932,   32); wait1Msec( 360);  // Note(A#, Duration(Eighth .))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(    0,   11); wait1Msec( 120);  // Note(Rest, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  784,   22); wait1Msec( 240);  // Note(C6, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  698,   22); wait1Msec( 240);  // Note(F, Duration(Eighth))
  playTone(  783,   43); wait1Msec( 480);  // Note(G)
  playTone(  880,   32); wait1Msec( 360);  // Note(D6, Duration(Eighth .))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(    0,   11); wait1Msec( 120);  // Note(Rest, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  933,   22); wait1Msec( 240);  // Note(D#6, Duration(Eighth))
  playTone(  880,   22); wait1Msec( 240);  // Note(D6, Duration(Eighth))
  playTone(  932,   22); wait1Msec( 240);  // Note(A#, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  880,   22); wait1Msec( 240);  // Note(D6, Duration(Eighth))
  playTone( 1175,   22); wait1Msec( 240);  // Note(G6, Duration(Eighth))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  698,   11); wait1Msec( 120);  // Note(F, Duration(16th))
  playTone(    0,   11); wait1Msec( 120);  // Note(Rest, Duration(16th))
  playTone(  698,   11); wait1Msec( 120);  // Note(F, Duration(16th))
  playTone(  587,   22); wait1Msec( 240);  // Note(D, Duration(Eighth))
  playTone(  932,   22); wait1Msec( 240);  // Note(A#, Duration(Eighth))
  playTone(  783,   86); wait1Msec( 960);  // Note(G, Duration(Half))
  playTone(    0,   43); wait1Msec( 480);  // Note(Rest)
  playTone( 1047,   11); wait1Msec( 120);  // Note(F6, Duration(16th))
  playTone(  880,   22); wait1Msec( 240);  // Note(D6, Duration(Eighth))
  playTone(  784,   22); wait1Msec( 240);  // Note(C6, Duration(Eighth))
  playTone(  932,   22); wait1Msec( 240);  // Note(A#, Duration(Eighth))
  playTone(  783,   43); wait1Msec( 480);  // Note(G)
  playTone(  932,   32); wait1Msec( 360);  // Note(A#, Duration(Eighth .))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(    0,   11); wait1Msec( 120);  // Note(Rest, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  784,   22); wait1Msec( 240);  // Note(C6, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  698,   22); wait1Msec( 240);  // Note(F, Duration(Eighth))
  playTone(  783,   43); wait1Msec( 480);  // Note(G)
  playTone(  880,   32); wait1Msec( 360);  // Note(D6, Duration(Eighth .))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(    0,   11); wait1Msec( 120);  // Note(Rest, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  933,   22); wait1Msec( 240);  // Note(D#6, Duration(Eighth))
  playTone(  880,   22); wait1Msec( 240);  // Note(D6, Duration(Eighth))
  playTone(  932,   22); wait1Msec( 240);  // Note(A#, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  880,   22); wait1Msec( 240);  // Note(D6, Duration(Eighth))
  playTone( 1175,   22); wait1Msec( 240);  // Note(G6, Duration(Eighth))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  698,   11); wait1Msec( 120);  // Note(F, Duration(16th))
  playTone(    0,   11); wait1Msec( 120);  // Note(Rest, Duration(16th))
  playTone(  698,   11); wait1Msec( 120);  // Note(F, Duration(16th))
  playTone(  587,   22); wait1Msec( 240);  // Note(D, Duration(Eighth))
  playTone(  932,   22); wait1Msec( 240);  // Note(A#, Duration(Eighth))
  playTone(  783,   86); wait1Msec( 960);  // Note(G, Duration(Half))
  playing = IDLE;
}

task StarWars()
{
  //        180 = Tempo
  //          5 = Default octave
  //    Quarter = Default note length
  //        10% = Break between notes
  //
  playing = STARWARS;
  playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
  playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
  playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
  playTone(  932,   90); wait1Msec(1000);  // Note(A#, Duration(Half .))
  playTone( 1047,   90); wait1Msec(1000);  // Note(F6, Duration(Half .))
  playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
  playTone(  880,   15); wait1Msec( 167);  // Note(D6, Duration(Eighth))
  playTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  playTone( 1398,   90); wait1Msec(1000);  // Note(A#6, Duration(Half .))
  playTone( 1047,   45); wait1Msec( 500);  // Note(F6, Duration(Quarter .))
  playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
  playTone(  880,   15); wait1Msec( 167);  // Note(D6, Duration(Eighth))
  playTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  playTone( 1398,   90); wait1Msec(1000);  // Note(A#6, Duration(Half .))
  playTone( 1047,   45); wait1Msec( 500);  // Note(F6, Duration(Quarter .))
  playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
  playTone(  880,   15); wait1Msec( 167);  // Note(D6, Duration(Eighth))
  playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
  playTone(  784,   90); wait1Msec( 333);  // Note(Rest)
  playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
  playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
  playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
  playTone(  932,   90); wait1Msec(1000);  // Note(A#, Duration(Half .))
  playTone( 1047,   90); wait1Msec(1000);  // Note(F6, Duration(Half .))
  playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
  playTone(  880,   15); wait1Msec( 167);  // Note(D6, Duration(Eighth))
  playTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  playTone( 1398,   90); wait1Msec(1000);  // Note(A#6, Duration(Half .))
  playTone( 1047,   45); wait1Msec( 500);  // Note(F6, Duration(Quarter .))
  playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
  playTone(  880,   15); wait1Msec( 167);  // Note(D6, Duration(Eighth))
  playTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  playTone( 1398,   90); wait1Msec(1000);  // Note(A#6, Duration(Half .))
  playTone( 1047,   45); wait1Msec( 500);  // Note(F6, Duration(Quarter .))
  playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
  playTone(  880,   15); wait1Msec( 167);  // Note(D6, Duration(Eighth))
  playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
  playTone(  784,   100); wait1Msec( 667);  // Note(C6, Duration(Half))
  playing = IDLE;
};

task Yaketysax()
{
  //        250 = Tempo
  //          5 = Default octave
  //     Eighth = Default note length
  //        10% = Break between notes
  //
  playing = YAKETY;

{
  //        125 = Tempo
  //          5 = Default octave
  //    Quarter = Default note length
  //        10% = Break between notes
  //
  playTone(  587,   32); wait1Msec( 360);  // Note(D, Duration(Eighth .))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  659,   22); wait1Msec( 240);  // Note(E, Duration(Eighth))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  440,   22); wait1Msec( 240);  // Note(A4, Duration(Eighth))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  466,   11); wait1Msec( 120);  // Note(A#4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  783,   43); wait1Msec( 480);  // Note(G)
  playTone(    0,   43); wait1Msec( 480);  // Note(Rest)
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  659,   22); wait1Msec( 240);  // Note(E, Duration(Eighth))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  587,   22); wait1Msec( 240);  // Note(D, Duration(Eighth))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  739,   11); wait1Msec( 120);  // Note(F#, Duration(16th))
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  698,   22); wait1Msec( 240);  // Note(F, Duration(Eighth))
  playTone(  587,   43); wait1Msec( 480);  // Note(D)
  playTone(    0,   43); wait1Msec( 480);  // Note(Rest)
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  659,   32); wait1Msec( 360);  // Note(E, Duration(Eighth .))
  playTone(  523,   22); wait1Msec( 240);  // Note(C, Duration(Eighth))
  playTone(  523,   22); wait1Msec( 240);  // Note(C, Duration(Eighth))
  playTone(  523,   22); wait1Msec( 240);  // Note(C, Duration(Eighth))
  playTone(  523,   22); wait1Msec( 240);  // Note(C, Duration(Eighth))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  932,   11); wait1Msec( 120);  // Note(A#, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  932,   11); wait1Msec( 120);  // Note(A#, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  1174,   22); wait1Msec( 240);  // Note(D6, Duration(Eighth))          I CHANGED THIS
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  880,   11); wait1Msec( 120);  // Note(D6, Duration(16th))
  playTone(  987,   22); wait1Msec( 240);  // Note(B, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  587,   22); wait1Msec( 240);  // Note(D, Duration(Eighth))
  playTone(  988,   11); wait1Msec( 120);  // Note(E6, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  880,   22); wait1Msec( 240);  // Note(A, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  /*
  playTone( 1175,   43); wait1Msec( 480);  // Note(G6)
  playTone( 1047,   65); wait1Msec( 720);  // Note(F6, Duration(Quarter .))
  playTone(  933,   65); wait1Msec( 720);  // Note(D#6, Duration(Quarter .))
  playTone(  831,   65); wait1Msec( 720);  // Note(C#6, Duration(Quarter .))
  playTone(  987,   65); wait1Msec( 720);  // Note(B, Duration(Quarter .))
  playTone(  932,   43); wait1Msec( 480);  // Note(A#)
  playTone(  830,   43); wait1Msec( 480);  // Note(G#)
  */
  playTone(    0,   43); wait1Msec( 480);  // Note(Rest)

   playTone(  587,   32); wait1Msec( 360);  // Note(D, Duration(Eighth .))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  659,   22); wait1Msec( 240);  // Note(E, Duration(Eighth))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  440,   22); wait1Msec( 240);  // Note(A4, Duration(Eighth))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  466,   11); wait1Msec( 120);  // Note(A#4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  783,   43); wait1Msec( 480);  // Note(G)
  playTone(    0,   43); wait1Msec( 480);  // Note(Rest)
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  659,   22); wait1Msec( 240);  // Note(E, Duration(Eighth))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  440,   11); wait1Msec( 120);  // Note(A4, Duration(16th))
  playTone(  493,   11); wait1Msec( 120);  // Note(B4, Duration(16th))
  playTone(  587,   22); wait1Msec( 240);  // Note(D, Duration(Eighth))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  739,   11); wait1Msec( 120);  // Note(F#, Duration(16th))
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  698,   22); wait1Msec( 240);  // Note(F, Duration(Eighth))
  playTone(  587,   43); wait1Msec( 480);  // Note(D)
  playTone(    0,   43); wait1Msec( 480);  // Note(Rest)
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  659,   32); wait1Msec( 360);  // Note(E, Duration(Eighth .))
  playTone(  523,   22); wait1Msec( 240);  // Note(C, Duration(Eighth))
  playTone(  523,   22); wait1Msec( 240);  // Note(C, Duration(Eighth))
  playTone(  523,   22); wait1Msec( 240);  // Note(C, Duration(Eighth))
  playTone(  523,   22); wait1Msec( 240);  // Note(C, Duration(Eighth))
  playTone(  659,   11); wait1Msec( 120);  // Note(E, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  783,   11); wait1Msec( 120);  // Note(G, Duration(16th))
  playTone(  932,   11); wait1Msec( 120);  // Note(A#, Duration(16th))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  932,   11); wait1Msec( 120);  // Note(A#, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  1174,   22); wait1Msec( 240);  // Note(D6, Duration(Eighth))              I CHANGED THIS
  playTone(  880,   11); wait1Msec( 120);  // Note(A, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  880,   11); wait1Msec( 120);  // Note(D6, Duration(16th))
  playTone(  987,   22); wait1Msec( 240);  // Note(B, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  587,   22); wait1Msec( 240);  // Note(D, Duration(Eighth))
  playTone(  988,   11); wait1Msec( 120);  // Note(E6, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  987,   11); wait1Msec( 120);  // Note(B, Duration(16th))
  playTone(  587,   11); wait1Msec( 120);  // Note(D, Duration(16th))
  playTone(  880,   22); wait1Msec( 240);  // Note(A, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))
  playTone(  783,   22); wait1Msec( 240);  // Note(G, Duration(Eighth))

  return;
}
  playing = IDLE;
}

task MissionImpossible()
{
  //        100 = Tempo
  //          6 = Default octave
  //    Quarter = Default note length
  //        10% = Break between notes
  //
  playing = MISSIONIMPOSSIBLE;
  playTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  playTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  playTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  playTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  playTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  playTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  playTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  playTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  playTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  playTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  playTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  playTone(  988,    7); wait1Msec(  75);  // Note(E, Duration(32th))
  playTone( 1047,    7); wait1Msec(  75);  // Note(F, Duration(32th))
  playTone( 1109,    7); wait1Msec(  75);  // Note(F#, Duration(32th))
  playTone( 1175,    7); wait1Msec(  75);  // Note(G, Duration(32th))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  playTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone(  784,   14); wait1Msec( 150);  // Note(C, Duration(16th))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  playTone( 1047,   14); wait1Msec( 150);  // Note(F, Duration(16th))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone( 1109,   14); wait1Msec( 150);  // Note(F#, Duration(16th))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  playTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone(  784,   14); wait1Msec( 150);  // Note(C, Duration(16th))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  playTone( 1047,   14); wait1Msec( 150);  // Note(F, Duration(16th))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone( 1109,   14); wait1Msec( 150);  // Note(F#, Duration(16th))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(  880,  108); wait1Msec(1200);  // Note(D, Duration(Half))
  playTone(    0,    7); wait1Msec(  75);  // Note(Rest, Duration(32th))
  playTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(  831,  108); wait1Msec(1200);  // Note(C#, Duration(Half))
  playTone(    0,    7); wait1Msec(  75);  // Note(Rest, Duration(32th))
  playTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  playTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  playTone(  784,  108); wait1Msec(1200);  // Note(C, Duration(Half))
  playTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  playTone(  932,   14); wait1Msec( 150);  // Note(A#5, Duration(16th))
  playTone(  784,   14); wait1Msec( 150);  // Note(C, Duration(16th))
  playing = IDLE;
}

void stopMusic()
{
  switch(playing)
  {
    case STARWARS: stopTask(StarWars); break;
    case YAKETY: stopTask(Yaketysax); break;
    case AXELF: stopTask(AxelF); break;
    case MISSIONIMPOSSIBLE: stopTask(MissionImpossible); break;
    default: break;
  }
}

void playStarWars()
{
  stopMusic();
  startTask(StarWars);
}

void playYaketysax()
{
  stopMusic();
  startTask(Yaketysax);
}

void playAxelF()
{
  stopMusic();
  startTask(AxelF);
}

void playMissionImpossible()
{
  stopMusic();
  startTask(MissionImpossible);
}
