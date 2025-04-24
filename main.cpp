#include "include/simulation.hpp"

int main()
{
   /* handi times in seconds */
   int minutes_20 = 1200;
   int minutes_30 = 1800;
   int minutes_40 = 2400;
   int minutes_50 = 3000;
   int hour = 3600;
   int hour_2 = 7200;

   std::string cities_source = "/home/coolsamurai/Cpp/projects/drones_system/data/cities.csv";
   std::string graph_source = "/home/coolsamurai/Cpp/projects/drones_system/data/graph.csv";
   int duration = 1800; // aka 30 minutes

   Simulation simulation(600, cities_source, graph_source);
   simulation.sim_run();
   return 0;
}