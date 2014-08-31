class Leg{
	public:
		void up();
		void down();
		void fwd();
		void back();
		void fold();
		void unfold();
		void setPos(uint8_t radPcnt, uint8_t angPcnt);
		void setPos(uint8_t heightPcnt, uint8_t angPcnt);
		uint8_t getRadPcnt();
		uint8_t getAngPcnt();
		/* methods to be implemented later
		void setLedInner(uint8_t R, uint8_t G, uint8_t B);
		void setLedMiddle(uint8_t R, uint8_t G, uint8_t B);
		void setLedOuter(uint8_t R, uint8_t G, uint8_t B);
		void getLedInner(uint8_t R, uint8_t G, uint8_t B);
		void getLedMiddle(uint8_t R, uint8_t G, uint8_t B);
		void getLedOuter(uint8_t R, uint8_t G, uint8_t B);
		*/
	private:
		void setJointInner(uint8_t position);
		void setJointMiddle(uint8_t position);
		void setJointOuter(uint8_t position);
		uint8_t getJointInner();
		uint8_t getJointMiddle();
		uint8_t getJointOuter();

}