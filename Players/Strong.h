#include "Job.h"
#ifndef STRONG_H
#define STRONG_H


/**
 * @brief Represents the Strong job class type, inheriting from the Job base class.
 */
class Strong : public Job{
    private:
     static const int STRONG_DAMAGE = 10; /**< Threshold for strong damage. */
public:

    /**
     * @brief Destructor for the Strong job class.
     */
    virtual ~Strong() = default;

    /**
     * @brief Default constructor for the Strong job class.
     */
    Strong() : Job() {}

    /**
     * @brief Retrieves the job type of the Strong class.
     * 
     * @return A string representing the type of the job.
     */
    string getJobType() override;
    void winFight() override;
};



#endif //STRONG_H
