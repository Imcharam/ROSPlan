#include "PlannerInterface.h"
#include "PlannerInterface.h"
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <string>
#include <streambuf>

#ifndef KCL_FD_planner_interface
#define KCL_FD_planner_interface

/**
 * This file contains an interface to the planner.
 */
namespace KCL_rosplan {

	class FDPlannerInterface: public PlannerInterface
	{
	private:

	protected:

		bool runPlanner();

	public:

		FDPlannerInterface(ros::NodeHandle& nh);
		virtual ~FDPlannerInterface();
	};

} // close namespace

#endif
