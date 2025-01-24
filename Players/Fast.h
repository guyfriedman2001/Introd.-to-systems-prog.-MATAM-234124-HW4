#include "Job.h"
#ifndef FAST_H
#define FAST_H



class Fast : public Job {
public:
    virtual ~Fast() = default;
    Fast() : Job() {}
    string getJobType() override;
};



#endif //FAST_H
