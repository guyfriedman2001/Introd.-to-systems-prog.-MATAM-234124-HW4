#include "Job.h"
#ifndef FAST_H
#define FAST_H


/**
 * @brief Represents the "Fast" job type, which is a specialization of Job.
 *
 * Defines the unique attributes and behavior associated with the "Fast" job type.
 */
class Fast : public Job {
public:

    /**
     * @brief Default destructor for Fast.
     */
    virtual ~Fast() = default;

    /**
     * @brief Constructs a Fast object.
     */
    Fast() : Job() {}


    /**
     * @brief Retrieves the job type of the Fast object.
     *
     * @return A string representing the job type.
     */
    string getJobType() override;
};



#endif //FAST_H
