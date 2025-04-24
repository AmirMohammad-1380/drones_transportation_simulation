# Drone Transportation Simulation

A C++ simulation of a drone-based goods transportation system with Hub-SubHub-Spoke architecture. Includes different drone types, Dijkstra routing, and performance stats.

-> there are 74 Iran's major cities in the simulation under a Hub-SubHub-Spoke architecture.

-> three types pf drones carry the goods between the cities under the following rules and policies
  large drones: travels only between the Hub nodes!
  medium drones: travels between Hub and SubHub nodes and also travels between Subhub nodes, if it's the case
  small drones: travels between SubHub and Spoke nodes and also travels between Spoke nodes, if it's the case

-> simulation finds each good's route using Dijkstra's Algorithm

-> there Threa Pool architecture used the simulation to prevent memory overload caused by asynchronous multi-thread processes

-> simulation can be run with different duration!

-> in the main.cpp the duration must be entered in seconds only!
