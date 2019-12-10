/*
 * EMVUtils.h
 *
 *  Created on: Nov 4, 2019
 *      Author: MamtaDevi
 */

#ifndef SRC_TLVUTILITY_SOURCE_EMVUTILS_H_
#define SRC_TLVUTILITY_SOURCE_EMVUTILS_H_

class EMVUtils {
public:
	EMVUtils(int,int);
	virtual ~EMVUtils();

	double testMul();
private:
	int mfirst_{};//initialize with default values using {}
	int msecond_{};
};



#endif /* SRC_TLVUTILITY_SOURCE_EMVUTILS_H_ */
