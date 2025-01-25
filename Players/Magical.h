#include "Job.h"
#ifndef MAGICAL_H
#define MAGICAL_H


/**
 * @brief Represents a Magical job, a subclass of Job.
 */
class Magical : public Job{
public:


    /**
     * @brief Destructor for the Magical class.
     */
    virtual ~Magical() = default;


    /**
     * @brief Default constructor for the Magical class.
     */
    Magical() : Job() {};


    string getJobType() override;

    /**
     * @brief Gets the effect of a solar eclipse on Magical job.
     * 
     * @param effect The effect of the solar eclipse.
     * @return The effect of the solar eclipse on the job.
     */
    int SolarEclipseEffect(int effect) override;
};



#endif //MAGICAL_H
