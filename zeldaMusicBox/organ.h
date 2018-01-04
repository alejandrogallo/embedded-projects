
// ------------- Function prototypes -------------- //

// Plays a note for the given duration.  None of these times are
//  calibrated to actual notes or tempi.  It's all relative to TIMEBASE.
void playNote(uint32_t wavelength, uint32_t duration);

// Does nothing for a time equal to the passed duration.
void silence(uint32_t duration);
