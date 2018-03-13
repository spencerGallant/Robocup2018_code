void MotorsInit() {
  // Define pinMode for the pins and set the frequency for timers 1 and 2.
  pinMode(_M1PWM, OUTPUT);
  pinMode(_M1CS, INPUT);
  pinMode(_M1DIR, OUTPUT);
  pinMode(_M2PWM, OUTPUT);
  pinMode(_M2CS, INPUT);
  pinMode(_M2DIR, OUTPUT);
  pinMode(_M3PWM, OUTPUT);
  pinMode(_M3CS, INPUT);
  pinMode(_M3DIR, OUTPUT);
  pinMode(_M4CS, INPUT);
  pinMode(_M4DIR, OUTPUT);

  analogWriteFrequency(3, 58593);
  analogWriteFrequency(4, 58593);
  analogWriteFrequency(29, 58593);
  analogWriteFrequency(30, 58593);
}


