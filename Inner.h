#ifndef _INNER_H_
#define _INNER_H_

#include<vector>
#include<memory>

class Inner
{
    public:
        void test();

    private:
        std::vector<std::shared_ptr<float> > data;
};

#endif
