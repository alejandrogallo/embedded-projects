#define SEND_RED                                        \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \
                                                        \
    send_one(); send_one(); send_one(); send_one();     \
    send_one(); send_one(); send_one(); send_one();     \
                                                        \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \

#define SEND_BLUE                                       \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \
                                                        \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \
                                                        \
    send_one(); send_one(); send_one(); send_one();     \
    send_one(); send_one(); send_one(); send_one();     \

#define SEND_GREEN                                      \
    send_one(); send_one(); send_one(); send_one();     \
    send_one(); send_one(); send_one(); send_one();     \
                                                        \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \
                                                        \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \

#define SEND_OFF                                        \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \
                                                        \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \
                                                        \
    send_zero(); send_zero(); send_zero(); send_zero(); \
    send_zero(); send_zero(); send_zero(); send_zero(); \

#define CLEAR                                       \
  SEND_OFF; SEND_OFF; SEND_OFF; SEND_OFF; SEND_OFF; \
  SEND_OFF; SEND_OFF; SEND_OFF; SEND_OFF; SEND_OFF; \
  SEND_OFF; SEND_OFF; SEND_OFF; SEND_OFF; SEND_OFF; \
  SEND_OFF; _delay_us(TRESET);
