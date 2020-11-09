void getVolumeSurface(double x, double y, double z, double* volume, double* surface) {
	*volume = x * y * z;
	*surface = 2 * (x * y + x * z + y * z);

	return;
}