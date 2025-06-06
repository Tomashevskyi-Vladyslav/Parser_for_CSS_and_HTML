//
//  UniversalSelector.h
//  DDCSSParser
//
//  Created by 1m0nster on 2018/8/7.
//  Copyright © 2018 1m0nster. All rights reserved.
//

#ifndef UniversalSelector_hpp
#define UniversalSelector_hpp

#include "Selector.h"

#include <stdio.h>
#include <iostream>

namespace future {
    class UniversalSelector: public Selector {
    public:
        UniversalSelector()
        {
            m_selectorType = Selector::UniversalSelector;
        }

        ~UniversalSelector() {}

        bool isBaseSelector();
        virtual std::string description();
        int weight();
    };
}

#endif /* UniversalSelector_hpp */
