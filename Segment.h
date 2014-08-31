/*
@author Adam Claassen, claassenadam@gmail.com
*/
class Segment{
	public:
		void Joint(uint8_t servoPin, ledAddr);
		void setAngle(uint8_t angle);
		void setColor(
			uint8_t red,
			uint8_t green
			uint8_t blue
			);
		uint8_t getAngle();
		uint8_t getRed();
		uint8_t getGreen();
		uint8_t getBlue();

	private:
		uint8_t m_angle;
		uint8_t m_red;
		uint8_t m_green;
		uint8_t m_blue;
		uint8_t m_pin;
		uint8_t m_addr;
		
}