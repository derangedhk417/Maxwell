// Author: Adam J. Robinson
// Description: Definition of a loop of wire and relevent 
// calculations.

// This class produces results in whatever units you use for inputs. If you
// want magnetic field values in Teslas, use SI units for all of the
// arguments.
class Loop {
public:
	float z_l;
	float r_l;
	float w_r;
	float sigma;

	// Arguments:
	//     z_l   : z coordinate of the center of the loop
	//     r_l   : radius of the loop
	//     w_r   : radius of the wire that the loop is comprised of
	//     sigma : conductivity of the wire 
	Loop(float z_l, float r_l, float w_r, float sigma);

	// Returns the resistance of the loop based on its characteristics.
	float getResistance();

	// Returns an array of length 3, which must be freed by the caller.
	// This array contains the x, y and z components respectively, 
	// at the given coordinates and with the given current flowing
	// through the loop.
	float * getBField(float x, float y, float z, float I);
}