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
		void setHeight(uint8_t heightPcnt);
		void setRad(uint8_t radPcnt);
		void setAng(uint8_t angPcnt);
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
		void _setJointInner(uint8_t position);
		void _setJointMiddle(uint8_t position);
		void _setJointOuter(uint8_t position);
		uint8_t _getJointInner();
		uint8_t _getJointMiddle();
		uint8_t _getJointOuter();

}