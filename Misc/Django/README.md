# Django-Python Based Web Development

A high level Python based Web Framework.

A framework is a collection of tools bundled into one package that we can use to build web applications.

**Django Features**

1. Object Relational Mapping
2. URL Routing
3. HTML Templating
4. Form Handling
5. Unit Testing
6. Database Management
6. Other Features

**Files of A New Django Project**

1. manage.py: Run various Django Commands.
2. ProjectName/__init__.py: Tells that there are Python files within this folder.
3. ProjectName/asgi.py and wsgi.py are used to hook to web servers.
4. ProjectName/settings.py: Used to configure Django Project.
5. ProjectName/urls.py: Used for Routing urls.

 **Files of A New Django App**

 1. apps.py: Controls settings specific to this app.
 2. models.py: Models we will use in the project and save in database.
 3. admin.py: Admin settings of the App.
 4. urls.py: Url Routing for this App.
 5. views.py: Backend Functionality.
 6. tests.py: To Run Tests.
 7. migrations/

**MVC-Model View Controller**

![Django-MVC](.\Images\django_mvc.jpg)

Django itself takes care of the Controller Part.

**Django Models**

1. Creates the Data Layer of the Django App
2. Defines Structure of the Database
3. Allows us to Query the Database
4. Stored inside the models.py file
    1. model class is inheritted from django.db.models.Model and it defines the database fireld as class attributes.