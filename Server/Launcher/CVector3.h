#ifndef __CVECTOR3_H__
#define __CVECTOR3_H__
#pragma once

/// <summary>
/// CVector3 class
/// By Ethem Kurt (BigETI)
/// </summary>
class CVector3
{
public:
	/// <summary>
	/// X component
	/// </summary>
	float x;

	/// <summary>
	/// Y component
	/// </summary>
	float y;

	/// <summary>
	/// Z component
	/// </summary>
	float z;

	/// <summary>
	/// Unit vector
	/// </summary>
	static const CVector3 unit;

	/// <summary>
	/// Null vector
	/// </summary>
	static const CVector3 null;

	/// <summary>
	/// Up vector
	/// </summary>
	static const CVector3 up;

	/// <summary>
	/// Down vector
	/// </summary>
	static const CVector3 down;

	/// <summary>
	/// Left vector
	/// </summary>
	static const CVector3 left;

	/// <summary>
	/// Right vector
	/// </summary>
	static const CVector3 right;

	/// <summary>
	/// Front vector
	/// </summary>
	static const CVector3 front;

	/// <summary>
	/// Back vector
	/// </summary>
	static const CVector3 back;

	/// <summary>
	/// Default constructor
	/// </summary>
	CVector3();

	/// <summary>
	/// Copy constructor
	/// </summary>
	/// <param name="v">Vector to assign from</param>
	CVector3(const CVector3 &v);

	/// <summary>
	/// Constructor
	/// </summary>
	/// <param name="_x">X component</param>
	/// <param name="_y">Y component</param>
	/// <param name="_z">Z component</param>
	CVector3(float _x, float _y, float _z);

	/// <summary>
	/// Destructor
	/// </summary>
	~CVector3();

	/// <summary>
	/// Assign Vector
	/// </summary>
	/// <param name="v">Vector to assign from</param>
	/// <returns>Itself</returns>
	CVector3 &operator=(const CVector3 &v);

	/// <summary>
	/// Add Vector
	/// </summary>
	/// <param name="v">Add from vector and assign result</param>
	/// <returns>Itself</returns>
	CVector3 &operator+=(const CVector3 &v);

	/// <summary>
	/// Subtract Vector
	/// </summary>
	/// <param name="v">Subtract from vector and assign result</param>
	/// <returns>Itself</returns>
	CVector3 &operator-=(const CVector3 &v);

	/// <summary>
	/// Multiply Vector
	/// </summary>
	/// <param name="s">Scalar to multiply with and assign result</param>
	/// <returns>Itself</returns>
	CVector3 &operator*=(float s);

	/// <summary>
	/// Divide Vector
	/// </summary>
	/// <param name="s">Scalar to divide with and assign result</param>
	/// <returns>Itself</returns>
	CVector3 &operator/=(float s);

	/// <summary>
	/// Add Vector
	/// </summary>
	/// <param name="v">Add from vector</param>
	/// <returns>Result vector</returns>
	CVector3 operator+(const CVector3 &v);

	/// <summary>
	/// Subtract Vector
	/// </summary>
	/// <param name="v">Subtract from vector</param>
	/// <returns>Result vector</returns>
	CVector3 operator-(const CVector3 &v);

	/// <summary>
	/// Vector dot product
	/// </summary>
	/// <param name="v">Scalar to multiply with</param>
	/// <returns>Result vector</returns>
	float operator*(const CVector3 &v);

	/// <summary>
	/// Multiply Vector
	/// </summary>
	/// <param name="s">Scalar to multiply with</param>
	/// <returns>Result vector</returns>
	CVector3 operator*(float s);

	/// <summary>
	/// Multiply Vector
	/// </summary>
	/// <param name="s">Scalar to divide with</param>
	/// <returns>Result vector</returns>
	CVector3 operator/(float s);

	/// <summary>
	/// Is vector null
	/// </summary>
	/// <returns>If null then true, otherwise false</returns>
	bool IsNull();

	/// <summary>
	/// Get magnitude of vector squared (faster than CVector3::Magnitude())
	/// </summary>
	/// <returns>Magnitude squared</returns>
	float MagnitudeSquared();

	/// <summary>
	/// Get magnitude of vector (slower than CVector3::MagnitudeSquared())
	/// </summary>
	/// <returns>Magnitude</returns>
	float Magnitude();

	/// <summary>
	/// Set magnitude of vector
	/// </summary>
	/// <param name="m">Magnitude</param>
	void SetMagnitude(float m);

	/// <summary>
	/// Create vector with magnitude
	/// </summary>
	/// <param name="m">Magnitude</param>
	/// <returns>Vector with set magnitude</returns>
	CVector3 WithMagnitude(float m);

	/// <summary>
	/// Is point in range
	/// </summary>
	/// <param name="p">Point to check</param>
	/// <param name="range">Range for check</param>
	/// <returns>If is point in range true, otherwise false</returns>
	bool IsInRange(const CVector3 &p, float range);

	/// <summary>
	/// Get cross product from 2 vectors
	/// </summary>
	/// <param name="v">Vector to get cross product from</param>
	/// <returns>Cross product from 2 vectors</returns>
	CVector3 CrossProduct(const CVector3 &v);

	/// <summary>
	/// Get angle between two vectors (radians)
	/// </summary>
	/// <param name="v">Vector to get angle between</param>
	/// <returns>Angle between 2 vectors (radians)</returns>
	float GetAngle(const CVector3 &v);

	/// <summary>
	/// Get angle between two vectors (degrees)
	/// </summary>
	/// <param name="v">Vector to get angle between</param>
	/// <returns>Angle between 2 vectors (degrees)</returns>
	float GetAngleDegrees(const CVector3 &v);

	/// <summary>
	/// Rotate around vector (radians)
	/// </summary>
	/// <param name="n">Normal vector to rotate around</param>
	/// <param name="radians">Radians to rotate</param>
	void RotateAround(const CVector3 &n, float radians);

	/// <summary>
	/// Create vector rotated around vector (radians)
	/// </summary>
	/// <param name="radians">Radians to rotate</param>
	/// <returns>Vector rotated around vector</returns>
	CVector3 CreateRotatedAround(const CVector3 &n, float radians);

	/// <summary>
	/// Rotate around vector (degrees)
	/// </summary>
	/// <param name="n">Normal vector to rotate around</param>
	/// <param name="degrees">Degrees to rotate</param>
	void RotateAroundDegrees(const CVector3 &n, float degrees);

	/// <summary>
	/// Create vector rotated around vector (degrees)
	/// </summary>
	/// <param name="degrees">Degrees to rotate</param>
	/// <returns>Vector rotated around vector</returns>
	CVector3 CreateRotatedAroundDegrees(const CVector3 &n, float degrees);

	/// <summary>
	/// Negate vector
	/// </summary>
	void Negate();

	/// <summary>
	/// Create negated vector
	/// </summary>
	/// <returns>Negated vector</returns>
	CVector3 CreateNegated();

	/// <summary> 
	/// Gets the distance between two points in 3D
	/// </summary> 
	/// <returns>Distacne</returns> 
	static const float Distance(CVector3 p1, CVector3 p2);

	/// <summary> 
	/// Gets the distance between two points in 2D
	/// </summary> 
	/// <returns>Distacne</returns> 
	static const float Distance2D(CVector3 p1, CVector3 p2);
};
#endif