// this program is automatically generated by jenerator. do not edit.
#include "../framework/keeper.hpp"
#include "../framework/aggregators.hpp"
#include "stat_types.hpp"
using namespace jubatus;
using namespace jubatus::framework;
int main(int args, char** argv){
  keeper k(keeper_argv(args,argv));
  k.register_broadcast<bool, config_data >("set_config", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_random<config_data >("get_config"); //pass analysis
  k.register_cht<2, bool, double >("push", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_cht<2, double >("sum", pfi::lang::function<double(double,double)>(&pass<double >)); //analysis
  k.register_cht<2, double >("stddev", pfi::lang::function<double(double,double)>(&pass<double >)); //analysis
  k.register_cht<2, double >("max", pfi::lang::function<double(double,double)>(&pass<double >)); //analysis
  k.register_cht<2, double >("min", pfi::lang::function<double(double,double)>(&pass<double >)); //analysis
  k.register_cht<2, double >("entropy", pfi::lang::function<double(double,double)>(&pass<double >)); //analysis
  k.register_cht<2, double, int, double >("moment", pfi::lang::function<double(double,double)>(&pass<double >)); //analysis
  k.register_broadcast<bool, std::string >("save", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_broadcast<bool, std::string >("load", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_broadcast<std::map<std::string,std::map<std::string,std::string > > >("get_status", pfi::lang::function<std::map<std::string,std::map<std::string,std::string > >(std::map<std::string,std::map<std::string,std::string > >,std::map<std::string,std::map<std::string,std::string > >)>(&merge<std::string,std::map<std::string,std::string > >)); //analysis
  k.run();
}
