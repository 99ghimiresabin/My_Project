/*
 * ElectronicItem.hpp
 *
 *  Created on: Apr 14, 2017
 *      Author: sabinghimire
 */

#ifndef ELECTRONICITEM_HPP_
#define ELECTRONICITEM_HPP_

#include "OrderItem.hpp"
#include "Date.hpp"

class ElectronicItem {
private:
    Type aType;
    int WarrantyMonths;
public:
    ElectronicItem();
    virtual ~ElectronicItem();
    virtual string whoAmI(void);};

#endif /* ELECTRONICITEM_HPP_ */
