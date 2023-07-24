<center> República Bolivariana de Venezuela </center>

<center>Universidad de Carabobo</center>

<center> Facultad Experimental de Ciencias y Tecnología </center> 

<center> Departamento de Computación - Arquitectura del Computador </center>

<br>
<br>

Autores:
* Br. Guillermo Cedeño C.I. 30.523.039
* Br. Brayan Ceballos C.I. 29.569.937

# <center> Propuesta de Computador para el desarrollo de Realidad Virtual </center>

La siguiente propuesta tiene como finalidad la presentación de un computador capacitado para el desarollo de realidad virtual, de igual forma busca analizar y trabajar las interacciones en este ámbito. Se cuenta con un presupuesto de $2500 US, que se considera suficiente para el planteamiento del equipo, pero antes se quiere describir el estado del arte actual de la realidad virtual así como el enfoque de esta rama computacional.

## Estado del Arte: Realidad virtual

Hoy en día, la realidad virtual es una modalidad que se encuentra en pleno crecimiento. Algo que mucho tiempo atrás se veía imposible se hace cada vez más tangible. Este es un campo que exige a gran demanda al computador y es una de las razones por la cuál no es una faceta que posea facilidad en la interacción. Adicionalmente, existen inconvenientes debido a los altos precios que pueden alcanzar los equipos necesarios para interactuar con este entorno. Más sin embargo, esta brecha ha disminuido al pasar del tiempo, ya que con el crecimiento del mercado del hardware y la formación técnica del público general, se han logrado desarrollar computadores que permitan el disfrute de la realidad virtual como se encuentra establecida hoy en día.

La realidad virtual es la creación de un entorno o escenario ficticio o simulado con apariencia totalmente real y que nos permite trasladarnos a cualquier lugar o situación que queramos como si nos creyésemos dentro de él, con la ilusión de estar dentro de este entorno. A través de diversos dispositivos como gafas o cascos de realidad virtual, con estos podemos sumergirnos dentro de ecosistemas, juegos y/o escenarios de diversa índole donde nos creamos nuestros avatares, que nos representan a través de una experiencia totalmente realista.

Todo esto es un preámbulo para el siguiente cuadro, donde mencionamos los componentes de nuestra CPU capaz de soportar de manera holgada la mayoría de los escenarios a los que será sometido por los programas de realidad virtual.

| Pieza | Marca/Modelo | Precio (USD) | Link |
| --- | --- | --- | --- |
| Procesador | Intel Core i7-13700KF | $400 | [AmazonUS.com](https://www.amazon.com/-/es/i7-13700KF-generaci%C3%B3n-Procesador-escritorio-n%C3%BAcleos/dp/B0BCDL7F5W/ref=sr_1_1?keywords=i7%2B13700kf&qid=1689083059&sprefix=i7%2Caps%2C549&sr=8-1&th=1) |
| GPU | Gigabyte GeForce RTX 4070 TI EAGLE OC 12GB GDDR6X DLSS3 | $943 | [AmazonUS.com](https://www.amazon.com/-/es/Gigabyte-ventiladores-WINDFORCE-GV-N407TGAMING-OC-12GD/dp/B0BRR2R8HH/ref=sr_1_1?__mk_es_US=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=1CGQ2SWINMWJX&keywords=Gigabyte+GeForce+RTX+4070+Ti+EAGLE+OC+12GB+GDDR6X+DLSS3&qid=1689100379&sprefix=corsair+icue+h150i+rgb+elite+enfriador+l%C3%ADquido+de+cpu%2Caps%2C364&sr=8-1) | 
|Placa Madre | MSI MAG Z790 TOMAHAWK WIFI | $212 | [AmazonUS.com](https://www.amazon.com/-/es/MAG-Z790-compatible-procesadores-generaci%C3%B3n/dp/B0BL8K1YH1/ref=sr_1_1?__mk_es_US=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=3DBPZOPPC3ITK&keywords=MSI+MAG+Z790+TOMAHAWK+WIFI&qid=1689100461&sprefix=corsair+icue+h150i+rgb+elite+enfriador+l%C3%ADquido+de+cpu%2Caps%2C368&sr=8-1) |
| Memoria RAM | Corsair Dominator Platinum RGB DDR5 32GB | $174 | [AmazonUS.com](https://www.amazon.es/Corsair-Optimizada-Regulaci%C3%B3n-Refrigeraci%C3%B3n-Ultrabrillantes/dp/B0BPLCCR1J/ref=sr_1_1_sspa?keywords=ram+ddr5+6400mhz&qid=1689085504&sprefix=ram+ddr5+6400%2Caps%2C342&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) |
| Almacenamiento | Corsair MP600 CORE XT 2TB Gen4 PCIe x4 NVMe M.2 | $128 | [AmazonUS.com](https://www.amazon.es/Corsair-MP600-Core-PCIe-Gen4/dp/B0BZ5J9W22/ref=sr_1_1?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=1TSJUIJ36E41V&keywords=corsair+mp600+core+xt+2tb+gen4+pcie+x4+nvme+m.2&qid=1689101249&sprefix=corsair+mp600+core+xt+2+tb+gen4+pcie+x4+nvme+m.2%2Caps%2C442&sr=8-1) |
| Fuente de Poder | Corsair RMx Series RM1200x 850W 80 Plus Gold Modular | $235 | [AmazonUS.com](https://www.amazon.es/Corsair-RM1200x-Alimentaci%C3%B3n-Totalmente-Modular/dp/B0BPSYHY41/ref=sr_1_1_sspa?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&keywords=Corsair+RMx+Series+RM850x+850W+80+Plus+Gold+Modular&qid=1689101370&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) |
| Sistema de Refrigeración | Corsair iCUE H150i RGB ELITE (Enfriamiento Líquido) | $158 | [AmazonUS.com](https://www.amazon.com/-/es/Enfriador-din%C3%A1micos-ventiladores-radiador-compatible/dp/B09YCHFXQL/ref=sr_1_1?__mk_es_US=%C3%85M%C3%85%C5%BD%C3%95%C3%91&keywords=orsair+iCUE+H150i+RGB+Elite+Enfriador+l%C3%ADquido+de+CPU&qid=1689100224&sr=8-1) |
| Carcasa | Corsair 700D AirFlow ATX Full-Towe | $250 | [AmazonUS.com](https://www.amazon.es/Corsair-Full-Tower-Ventiladores-Incluidos-Repetidor/dp/B094442NL5/ref=sr_1_6?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&keywords=Caja%3A+Corsair+iCUE+5000D+RGB+AIRFLOW+Cristal+Templado+USB+3.2+Blanca&qid=1689085858&sr=8-6) |

A continuación se desarrollará con más detalle cada unos de los componentes: 

1. Procesador Intel Core i7-13700KF: Este procesador cuenta con una gran capacidad para asimilar datos, esto nos permitirá manejar todos los datos que se puedan recopilar e interactuar dentro del ecosistema de realidad virtual, este posee un total de 16 núcleos el cuál nos otorga como ventaja el manejo de múltiples programas así como de la imagen, sonido y herramientas de interacción necesarias para que la realidad virtual sea los más _realista_ posible. De igual forma destaca su poco tiempo en el mercado y su carácter de tope de gama.


2. GPU Gigabyte GeForce RTX 4070 Ti EAGLE OC 12GB GDDR6X DLSS3: Siguiendo el orden de ideas, se seleccionó este GPU por el salto de calidad que le aporta a la PC, por medio de sus gráficos acompañados con tecnología IA. Esta tarjeta gráfica abre un mundo de posibilidades en los entornos virtuales, dando trazos realistas, con FPS altísimos y de muy baja latencia. Esto nos permité darle ese plus necesario al equipo para que el desarrollo del ámbito virtual se vea favorecido con esos rasgos realistas.

3. Placa madre MSI MAG Z790 TOMAHAWK WIFI: Una placa madre moderna con gran soporte para los componentes propuestos. Esta placa característica de MSI compatible con procesadores de 13mo. tercera Gen cuenta con un diseño de alimentación mejorado que incluye sistemas de alimentación Duet Rail 16+1+1, Core Boost y Memory Boost, favoreciendo a la interacción gráfica. Factor necesario para el campo actual (RV).

4. Memoria RAM Corsair Dominator Platinum RGB DDR5 32GB: La gama de memoria RAM de Corsair ofrece una compatiblidad máxima con procesadores Intel, esta es la principal razón de la elección de este componente. De igual manera destaca el aprovechamiento de las frecuencias más altas y su capacidad en la memoria DDR5 con un control manejado por el propio software de Corsair.

5. Almacenamiento Corsair MP600 CORE XT 2 TB Gen4 PCIe x4 NVMe M.2: Esta unidad de almacenamiento ofrece una capacidad beneficiosa para el desarrollo de realidad virtual debido a su alta velocidad de lectura y escritura, lo que permite una carga rápida de datos y una transferencia eficiente de información. Esto puede mejorar el rendimiento y la fluidez de las aplicaciones de realidad virtual, lo que a su vez puede mejorar la experiencia del usuario.

6. Fuente de poder Corsair RMx Series RM1200x 850W 80 Plus Gold Modular: esta fuente de poder es ventajosa para un equipo que desarrolla realidad virtual al proporcionar una alimentación estable y eficiente a los componentes del sistema. Esto puede mejorar el rendimiento y la estabilidad del equipo, lo que a su vez puede mejorar la experiencia de desarrollo y uso de aplicaciones de realidad virtual.

7. Refrigeración Corsair iCUE H150i RGB Elite: Refrigeración líquida de calidad para la CPU, con iluminación RGB integrada y visualmente refinado. Los ventiladores PWM CORSAIR AF Elite suministran un flujo de aire bastante potente y silencioso que aporta el mantenimiento inmediato para el equipo.


8. Carcasa Corsair 7000D AIRFLOW ATX Full-Tower: Case grande y con buena circulación de aire, adicionalmente cuenta con 3 ventiladores que mantienen aún más la refrigeración y protección del equipo.

#### Conclusión
Podemos concluir que con estos componentes poseemos todos los elementos gráficos y de potencia necesarios para el desarollo de realidad virtual. Es un armado suficiente para lo que se busca. Si faltaría escoger unos buenos lentes de realidad virtual compatibles para hacer una inmersión mucho más profunda. Como recomendación se proponen las HTC Vive, pero éstas ya se encuentran fuera de presupuesto.

Esperamos que esta propuesta sea beneficiosa para el área computacional y que logre responder todas las interrogantes propuestas.