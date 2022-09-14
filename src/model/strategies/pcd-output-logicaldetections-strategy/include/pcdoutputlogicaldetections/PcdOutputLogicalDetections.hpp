//
// Copyright Institute of Automotive Engineering
// of Technical University of Darmstadt, 2021.
// Licensed under the EUPL-1.2-or-later
//
// This work covered by the EUPL can be used/merged and distributed
// in other works covered by GPL-2.0, GPL-3.0, LGPL, AGPL, CeCILL,
// OSL, EPL, MPL and other licences listed as compatible in the EUPL
// Appendix. This applies to the other (combined) work, while the
// original project stays covered by the EUPL without re-licensing.
//
// Alternatively, the contents of this file may be used under the
// terms of the Mozilla Public License, v. 2.0. If a copy of the MPL
// was not distributed with this file, you can obtain one at
// http://mozilla.org/MPL/2.0/.
//

#ifndef PCD_OUTPUT_LOGICALDETECTIOONS_STRATEGY_HPP
#define PCD_OUTPUT_LOGICALDETECTIOONS_STRATEGY_HPP

#include <model/include/strategy.hpp>
#include <string>

using namespace osi3;

namespace model {

	class PcdOutputLogicalDetections : public Strategy {

        using Strategy::Strategy;

        void apply(SensorData &) override;

        std::string path_string;
        bool first_call = true;

    public:

    private:
	    static void writePcdHeader(const std::string& path, const SensorData& sensor_data);
        static void write2Pcd(const std::string& path, float x, float y, float z, float intensity);
    };

}

#endif //PCD_OUTPUT_LOGICALDETECTIOONS_STRATEGY_HPP
