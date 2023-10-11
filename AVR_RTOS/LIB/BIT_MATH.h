/*
* BIT_MATH.h
*
* Created: 9/10/2022 7:20:04 PM
*  Author: En.EslamEid
*/


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define  SET_BIT(REG,BIT_NUM)    ((REG)|=(1<<(BIT_NUM)))
#define  CLEAR_BIT(REG,BIT_NUM)  ((REG)&=(~(1<<(BIT_NUM))))
#define  GET_BIT(REG,BIT_NUM)    (((REG)>>(BIT_NUM))&1)
#define  TOG_BIT(REG,BN)         ((REG) ^= (1<<(BN)))

#define  IS_LOW(REG,BIT_NUM)     (!(((REG)>>(BIT_NUM))&1))
#define  IS_HIGH(REG,BIT_NUM)    (((REG)>>(BIT_NUM))&1)

#define  ROR(DATA,N)       ((DATA)=((DATA>>N)|((DATA)<<(8-(N)))))
#define  ROL(DATA,N)       ((DATA)=((DATA<<N)|((DATA)>>(8-(N)))))


#endif /* BIT_MATH_H_ */