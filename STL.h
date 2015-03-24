/*
 * STL.h
 *
 *  Created on: Nov 14, 2014
 *      Author: dreossi
 */

#ifndef STL_H_
#define STL_H_

#include "Common.h"
#include <string.h>

class STL {
public:
	STL();
	virtual ~STL();

	formula_type getType(){return type;}

	virtual ex getPredicate(){ex foo; return foo;};
	virtual STL * getSubFormula(){return new STL();};
	virtual STL * getLeftSubFormula(){return new STL();};
	virtual STL * getRightSubFormula(){return new STL();};
	virtual void setPredicateControlPts(lst predicateControlPts){};
	virtual lst getPredicateControlPts(){lst foo; return foo;};

	virtual int getA(){return 0;};
	virtual int getB(){return 0;};
	virtual void setA(int a){};
	virtual void setB(int b){};

	virtual void print(){};

protected:

	formula_type type;
};

#endif /* STL_H_ */