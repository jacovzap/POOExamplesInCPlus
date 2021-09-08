/*
Una telefonica telefónica desea un sistema informático para administrar los servicios que ofrece y las ventas que realiza. Existen dos tipos de servicios:
•	Telefonía, compuesto por código y cantidad de minutos para llamadas.
•	Internet, compuesto por código y velocidad de descarga.
Los servicios se venden en contratos a dos tipos de clientes:
•	Persona, en el cual se debe registrar el código, ci, nombre y la lista de pagos realizados.
•	Telefonica, en el cual se debe registrar código, NIT, razon social y la lista de pagos realizados.
La aplicación debe permitir al usuario realizar las siguientes tareas:
•	Registrar servicios y ordenarlos por código.
•	Registrar contratos y ordenarlos por código de cliente.
•	Registrar pagos en un contrato.
*/
#include "Telefonica.h"

//Creamos telefonica
Telefonica telefonica;

int pregunta1()
{
	cout << "----Pregunta 1----" << endl;
	//registramos servicios (codigo,minutos/velocidad)
	telefonica.registrarServicio(new Telefonia("TEL100", 100));
	telefonica.registrarServicio(new Internet("INT1000", 1000));
	telefonica.registrarServicio(new Telefonia("TEL200", 200));
	telefonica.registrarServicio(new Internet("INT2000", 2000));
	cout << telefonica.toString() << endl;
	if (telefonica.toString() == "{servicios:[{tipo:internet,codigo:INT1000,velocidad:1000},{tipo:internet,codigo:INT2000,velocidad:2000},{tipo:telefonia,codigo:TEL100,minutos:100},{tipo:telefonia,codigo:TEL200,minutos:200}],contratos:[]}")
	{
		cout << "Resultado: correcto" << endl;
		return 25;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}

int pregunta2()
{
	cout << "----Pregunta 2----" << endl;
	//registramos contratos (id,servicio,cliente)
	telefonica.registrarContrato(123, "TEL100", new Persona(1, 12345, "Alvaro Castro"));
	telefonica.registrarContrato(456, "TEL200", new Empresa(2, 358258, "UCB"));
	telefonica.registrarContrato(458, "TEL200", new Persona(3, 12346, "Juan Perez"));

	cout << telefonica.toString() << endl;
	if (telefonica.toString() == "{servicios:[{tipo:internet,codigo:INT1000,velocidad:1000},{tipo:internet,codigo:INT2000,velocidad:2000},{tipo:telefonia,codigo:TEL100,minutos:100},{tipo:telefonia,codigo:TEL200,minutos:200}],contratos:[{id:123,cliente:{codigo:1,ci:12345,nombre:Alvaro Castro},servicio:{tipo:telefonia,codigo:TEL100,minutos:100},pagos:[]},{id:456,cliente:{codigo:2,nit:358258,razon:UCB},servicio:{tipo:telefonia,codigo:TEL200,minutos:200},pagos:[]},{id:458,cliente:{codigo:3,ci:12346,nombre:Juan Perez},servicio:{tipo:telefonia,codigo:TEL200,minutos:200},pagos:[]}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 25;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}

int pregunta3()
{
	cout << "----Pregunta 3----" << endl;

	//Registramos pagos en contratos(id contrato, monto, fecha)
	telefonica.registrarPago(123, 100, 20211010);
	telefonica.registrarPago(123, 200, 20211130);
	telefonica.registrarPago(456, 200, 20211130);
	telefonica.registrarPago(456, 200, 20211230);

	cout << telefonica.toString() << endl;
	if (telefonica.toString() == "{servicios:[{tipo:internet,codigo:INT1000,velocidad:1000},{tipo:internet,codigo:INT2000,velocidad:2000},{tipo:telefonia,codigo:TEL100,minutos:100},{tipo:telefonia,codigo:TEL200,minutos:200}],contratos:[{id:123,cliente:{codigo:1,ci:12345,nombre:Alvaro Castro},servicio:{tipo:telefonia,codigo:TEL100,minutos:100},pagos:[{fecha:20211010,monto:100},{fecha:20211130,monto:200}]},{id:456,cliente:{codigo:2,nit:358258,razon:UCB},servicio:{tipo:telefonia,codigo:TEL200,minutos:200},pagos:[{fecha:20211130,monto:200},{fecha:20211230,monto:200}]},{id:458,cliente:{codigo:3,ci:12346,nombre:Juan Perez},servicio:{tipo:telefonia,codigo:TEL200,minutos:200},pagos:[]}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 25;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}

int pregunta4()
{
	cout << "----Pregunta 4----" << endl;
	string error;
	try {
		//Registramos pagos en contratos(id contrato, monto, fecha)
		telefonica.registrarPago(123, 100, 20211210);
		telefonica.registrarPago(789, 300, 20211130);
		telefonica.registrarPago(789, 400, 20211230);
		telefonica.registrarPago(789, 500, 20211130);
		telefonica.registrarPago(789, 600, 20211230);
	}
	catch (exception& e) {
		error = e.what();
	}
	string result = telefonica.toString();
	cout << result << endl;
	cout << error << endl;
	if (error == "Contrato 789 inexistente" && result == "{servicios:[{tipo:internet,codigo:INT1000,velocidad:1000},{tipo:internet,codigo:INT2000,velocidad:2000},{tipo:telefonia,codigo:TEL100,minutos:100},{tipo:telefonia,codigo:TEL200,minutos:200}],contratos:[{id:123,cliente:{codigo:1,ci:12345,nombre:Alvaro Castro},servicio:{tipo:telefonia,codigo:TEL100,minutos:100},pagos:[{fecha:20211010,monto:100},{fecha:20211130,monto:200},{fecha:20211210,monto:100}]},{id:456,cliente:{codigo:2,nit:358258,razon:UCB},servicio:{tipo:telefonia,codigo:TEL200,minutos:200},pagos:[{fecha:20211130,monto:200},{fecha:20211230,monto:200}]},{id:458,cliente:{codigo:3,ci:12346,nombre:Juan Perez},servicio:{tipo:telefonia,codigo:TEL200,minutos:200},pagos:[]}]}")
	{
		cout << "Resultado: correcto" << endl;
		return 25;
	}
	cout << "Resultado: incorrecto" << endl;
	return 0;
}

int main()
{
	int nota = pregunta1() + pregunta2() + pregunta3() +pregunta4();
	cout << endl;
	cout << "====================" << endl;
	cout << "===> NOTA: " << nota << "/100" << endl;
	cout << "====================" << endl;
	system("pause");
	return 0;
}