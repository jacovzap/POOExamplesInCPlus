//Una entidad bancaria almacena las transacciones que se realizan sobre las cuentas de sus clientes
//Las transacciones pueden ser de los siguientes tipos: Deposito, Retiro, Transferencia
#include <string>
#include <iostream>
#include "Banco.h"

using namespace std;

//Creamos el banco
Banco banco;

int pregunta1()
{
	cout << "----Pregunta 1----" << endl;
	string error;
	try {
		//Construimos cuentas(id, dueño, saldo)
		banco.registrarCuenta(1, "Paola Perez", 1000);
		banco.registrarCuenta(2, "Leonardo Castro", 1000);
		banco.registrarCuenta(3, "Amadeo Sainz", 1000);
		//Registramos transacciones(idCuenta, Transaccion(id, monto, fecha))
		banco.registrarTransaccion(1, new Retiro(1, 200, 20190301));
		banco.registrarTransaccion(2, new Retiro(1, 100, 20190101));
		banco.registrarTransaccion(3, new Deposito(1, 200, 20190201));
	}
	catch (exception& e) {
		error = e.what();
	}
	string result = banco.toString();
	cout << result << endl;
	cout << error << endl;
	if (error == "" && result == "{cuentas:[{id:3,titular:Amadeo Sainz,saldo:1200,transacciones:[{tipo:deposito,id:1,monto:200,fecha:20190201}]},{id:2,titular:Leonardo Castro,saldo:900,transacciones:[{tipo:retiro,id:1,monto:100,fecha:20190101}]},{id:1,titular:Paola Perez,saldo:800,transacciones:[{tipo:retiro,id:1,monto:200,fecha:20190301}]}],transferencias:[]}")
	{
		cout << "Resultado: correcto" << endl;
		return 35;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}

int pregunta2()
{
	cout << "----Pregunta 2----" << endl;
	string error;
	try {
		//Registramos Transferencia(idCuentaOrigen, idCuentaDestino, idTransaccion, monto, fecha)
		banco.registrarTransferencia(2, 1, 1001, 500, 20190101);
		banco.registrarTransferencia(1, 2, 1000, 200, 20190201);
		
	}
	catch (exception& e) {
		error = e.what();
	}
	string result = banco.toString();
	cout << result << endl;
	string prueba = "{cuentas:[{id:3,titular:Amadeo Sainz,saldo:1200,transacciones:[{tipo:deposito,id:1,monto:200,fecha:20190201}]},{id:2,titular:Leonardo Castro,saldo:600,transacciones:[{tipo:retiro,id:1,monto:100,fecha:20190101},{tipo:retiro,id:1001,monto:500,fecha:20190101},{tipo:deposito,id:1000,monto:200,fecha:20190201}]},{id:1,titular:Paola Perez,saldo:1100,transacciones:[{tipo:deposito,id:1001,monto:500,fecha:20190101},{tipo:retiro,id:1000,monto:200,fecha:20190201},{tipo:retiro,id:1,monto:200,fecha:20190301}]}],transferencias:[{tipo:transferencia,id:1001,origen:{id:2,titular:Leonardo Castro,saldo:600},destino:{id:1,titular:Paola Perez,saldo:1100},monto:500,fecha:20190101},{tipo:transferencia,id:1000,origen:{id:1,titular:Paola Perez,saldo:1100},destino:{id:2,titular:Leonardo Castro,saldo:600},monto:200,fecha:20190201}]}";
	cout << endl;

	cout << prueba << endl;
	cout << error << endl;
	if (error == "" && result == "{cuentas:[{id:3,titular:Amadeo Sainz,saldo:1200,transacciones:[{tipo:deposito,id:1,monto:200,fecha:20190201}]},{id:2,titular:Leonardo Castro,saldo:600,transacciones:[{tipo:retiro,id:1,monto:100,fecha:20190101},{tipo:retiro,id:1001,monto:500,fecha:20190101},{tipo:deposito,id:1000,monto:200,fecha:20190201}]},{id:1,titular:Paola Perez,saldo:1100,transacciones:[{tipo:deposito,id:1001,monto:500,fecha:20190101},{tipo:retiro,id:1000,monto:200,fecha:20190201},{tipo:retiro,id:1,monto:200,fecha:20190301}]}],transferencias:[{tipo:transferencia,id:1001,origen:{id:2,titular:Leonardo Castro,saldo:600},destino:{id:1,titular:Paola Perez,saldo:1100},monto:500,fecha:20190101},{tipo:transferencia,id:1000,origen:{id:1,titular:Paola Perez,saldo:1100},destino:{id:2,titular:Leonardo Castro,saldo:600},monto:200,fecha:20190201}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 35;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}

int pregunta3()
{
	cout << "----Pregunta 3----" << endl;
	string error;
	try {
		//Registramos Transferencia(idCuentaOrigen, idCuentaDestino, idTransaccion, monto, fecha)
		banco.registrarTransferencia(1, 2, 1000, 2000, 20190201);
		banco.registrarTransferencia(2, 1, 1001, 2000, 20190101);
	}
	catch (exception& e) {
		error = e.what();
	}
	string result = banco.toString();
	cout << result << endl;
	cout << error << endl;
	if (error == "Cuenta 1 sin fondos" && result == "{cuentas:[{id:3,titular:Amadeo Sainz,saldo:1200,transacciones:[{tipo:deposito,id:1,monto:200,fecha:20190201}]},{id:2,titular:Leonardo Castro,saldo:600,transacciones:[{tipo:retiro,id:1,monto:100,fecha:20190101},{tipo:retiro,id:1001,monto:500,fecha:20190101},{tipo:deposito,id:1000,monto:200,fecha:20190201}]},{id:1,titular:Paola Perez,saldo:1100,transacciones:[{tipo:deposito,id:1001,monto:500,fecha:20190101},{tipo:retiro,id:1000,monto:200,fecha:20190201},{tipo:retiro,id:1,monto:200,fecha:20190301}]}],transferencias:[{tipo:transferencia,id:1001,origen:{id:2,titular:Leonardo Castro,saldo:600},destino:{id:1,titular:Paola Perez,saldo:1100},monto:500,fecha:20190101},{tipo:transferencia,id:1000,origen:{id:1,titular:Paola Perez,saldo:1100},destino:{id:2,titular:Leonardo Castro,saldo:600},monto:200,fecha:20190201}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 30;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}

int main()
{
	int nota = pregunta1()+ pregunta2() + pregunta3();
	cout << endl;
	cout << "====================" << endl;
	cout << "===> NOTA: " << nota << "/100" << endl;
	cout << "====================" << endl;
	system("pause");
	return 0;
}