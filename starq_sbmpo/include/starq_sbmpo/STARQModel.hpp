#ifndef STARQ_SBMPO_MODEL_HPP_
#define STARQ_SBMPO_MODEL_HPP_

#include <sbmpo/models/UnicycleSteeringModel.hpp>

namespace starq_sbmpo {

using namespace sbmpo;

class STARQModel : public sbmpo_models::UnicycleSteeringModel {

public:

    STARQModel() 
    : sbmpo_models::UnicycleSteeringModel() {
        // TODO: Register NVBLOX Map subscription
    }

    bool is_valid(const State& state) override {
        // TODO: NVBLOX Map obstacle detection
    }

private:


};

}


#endif