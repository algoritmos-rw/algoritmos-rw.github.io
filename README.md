# WachenEntrada

Portal a todas las páginas de cursos de la catedra:

* Algoritmos y Programación I -> http://www.algoritmos7540-rw.tk/

* Algoritmos y Programación II -> http://www.algoritmos7541-rw.tk/

* Teoría de Algoritmos I -> https://algoritmos-rw.github.io/tda/

* Teoría de Algoritmos II -> https://algoritmos-rw.github.io/tda2/

---

### Instrucciones para actualizar la página web

Cualquier commit en el directorio raíz se auto-publica en la página al hacer push a la rama _master_. GitHub se encarga de ese proceso.

Para visualizar los cambios de manera local, se debe instalar Jekyll. En Windows se instala [así](https://jwillmer.de/blog/tutorial/how-to-install-jekyll-and-pages-gem-on-windows-10-x46)

```
# Setup inicial

$ gem install jekyll bundler //Instala Jekyll.
$ gem install bundler //Instala bundler
$ git clone https://github.com/algoritmos-rw/algoritmos-rw.github.io.git
$ cd algoritmos-rw.github.io
$ bundle install //Instala los plugins de Jekyll que le dice el Gemfile

# Para visualizar al editar

$ cd algoritmos-rw.github.io
$ bundle exec jekyll serve --safe
```

### Como agregar o modificar una materia

Las materias estan escritas en archivos .md dentro de la carpeta posts, con nombre del estilo: 2017-01-01-algo1.md

Solamente agregando un archivo nombrado de esa forma (el nombre determina el orden en que aparezcan en el sitio), el sitio se actualizara automaticamente.

Todas las materias tienen un [frontmatter](https://jekyllrb.com/docs/frontmatter/) detallando sus atributos. Estos son, detallando los campos obligatorios con *:

```
---
codigo*: 75 40     //No debe tener un punto
titulo*: Algoritmos y Programación I
sitio*: http://www.algoritmos7540-rw.tk/
descripcion*: Curso en el que se busca introducir a los alumnos a la programación
lenguajes: Python
imagen: /assets/img/python.png
color: rgb(236, 112, 99)     //Debe ser en RGB
---
```