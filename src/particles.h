#ifndef _ZEPHYROS_SCATTERERS
#define _ZEPHYROS_SCATTERERS

#include "coordinates.h"
#include "particles_mischenko2000.h"
#include <complex.h>

typedef struct st_zephyros_particles_widget
{
	//air characterization
	double 	air_totalpressure_hPa;		//total air pressure		[hPa]
	double 	air_drypressure_hPa;		//partial dry air pressure		[hPa]
	double 	air_vaporpressure_hPa;		//partial vapor pressure	[hPa]
	double 	air_temperature_K;			//temperature in Kelvin
	double 	air_dynamic_viscosity;		//Pa s = kg m-1 s-3  (S.I.)
	double 	air_kinematic_viscosity;	//[m2 s-3]  (S.I.)
	double 	air_density;				//[kg m-3]
	double 	air_gravity;				//[m s-2]
	
	//particle characterization
	int		particle_type;
	//1 = spherical water droplets
	//2 = sheroid water droplets 
	//3 = spherical water droplets, no turbulence correction
	//4 = sheroid water droplets, no turbulence corrrection
	//10 = ice crystal (not implemented yet)

	double	particle_density;
	double 	particle_axis_ratio;		
	double 	particle_D_maj_mm;			//particle major axis diameter 	[mm]
	double 	particle_D_eqvol_mm;		
	double 	particle_D_min_mm;			
	double 	particle_mass_kg;			//kg
	double 	particle_A_maj;			
	double 	particle_A_min;			
	double 	particle_volume;			

	//dynamics
	double 	particle_dir[4];				//particle direction / orientation
	double  particle_terminal_fall_speed;
	
	
	double  particle_inertial_eta_z;
	double  particle_inertial_eta_xy;
	double  particle_inertial_distance_z;
	double  particle_inertial_distance_xy;

	//particle cross section
	double complex particle_refractive_index;
	double particle_sigma_hh;
	double particle_sigma_hv;
	double particle_sigma_vh;
	double particle_sigma_vv;
	
	double particle_sigma_ShhSvvc;
	double particle_sigma_ShhShvc;
	double particle_sigma_SvvSvhc;
	
	double particle_Re_Shh_min_Svv;
	
	double particle_attenuation;

	double dewolf1990_shapefactor_biglambda12;
	double dewolf1990_shapefactor_biglambda3;
	double dewolf1990_fct;

	//not a pointer, therefore the object does not have to be initialized -:).
	t_mischenko2000_widget mischenko2000_wid;	

	double radar_wavelength_m;

} t_zephyros_particles_widget;

void particles_air_parameters(t_zephyros_particles_widget *scat, t_zephyros_coordinates *coor);
void particles_spheroid_geometry_beard1987(t_zephyros_particles_widget *scat);
void particles_terminal_fall_speed_khvorostyanov2005(t_zephyros_particles_widget *scat);
void particles_terminal_fall_speed_mitchell1996(t_zephyros_particles_widget *scat);
void particles_fall_speed_atlas1973(t_zephyros_particles_widget *scat);
void particles_cross_sections_dewolf1990(t_zephyros_particles_widget *scat, t_zephyros_coordinates *coor);
void particles_cross_sections_dewolf1990_update_coor(t_zephyros_particles_widget *scat, t_zephyros_coordinates *coor);

void particles_cross_sections_mischenko2000(t_zephyros_particles_widget *scat, t_zephyros_coordinates *coor, int i_backward_forward);
void particles_cross_sections_mischenko2000_update_coor(t_zephyros_particles_widget *scat, t_zephyros_coordinates *coor, int i_backward_forward);


void particles_inertiamodel_fraction(
	double *omega,
	double *etaI,
	double *fraction);
	
void particles_inertiamodel_phaselag(
	double *omega,
	double *etaI,
	double *phaselag);	

void particle_print_widget(t_zephyros_particles_widget *scat);

#endif
