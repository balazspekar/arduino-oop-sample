class DigitalPin
{
  public: // members available for the outside world
  DigitalPin(int pin); // the constructor
  void begin();
  void on();
  void off();
  bool status();

  private: // members for private use only
  int _pin;
  bool _status;  
};


DigitalPin::DigitalPin(int pin) // the constructor at work
{
  _pin = pin;  
}


void DigitalPin::begin() // set the selected PIN to be a digital output
{
  pinMode(_pin, OUTPUT);
}


void DigitalPin::on() // set current flow and set private status to 1
{
  digitalWrite(_pin, HIGH);
  _status = 1;
}


void DigitalPin::off() // turning off current and set privete status to 0
{
  digitalWrite(_pin, LOW);
  _status = 0;
}


bool DigitalPin::status() // this is just to determine if the digital pin object is ON or OFF
{
  return _status;
}
