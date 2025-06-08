# Gestión de reservas de salas de estudio - UABC

## Introducción
### Descripción general del sistema
Sistema web para que estudiantes de la UABC reserven salas de estudio en la Biblioteca Central, con validación de disponibilidad en tiempo real, gestión de reservas y notificaciones.

### Objetivo General
Permitir a estudiantes reservar espacios de estudio de forma anticipada, optimizando la utilización de los recursos disponibles.

### Objetivos específicos
1. Gestión de usuarios: Registro, autenticación y perfiles de estudiantes.
2. Búsqueda y disponibilidad: Consultar salas libres por fecha, hora y características.
3. Reservas: Realizar, modificar y cancelar reservas con validación de reglas.

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1

### HU-01: Como estudiante quiero registrarme con mi correo institucional para acceder al sistema.
**Criterios de aceptación**:  
- Se envía correo de verificación al registrarse.  
- Si el correo no es @uabc.edu.mx, muestra error.  

### HU-02: Como estudiante quiero iniciar sesión con mis credenciales para gestionar reservas.
**Criterios de aceptación**:  
- Redirige al dashboard tras inicio exitoso.  
- Credenciales incorrectas muestran mensaje de error.  

### HU-03: Como estudiante quiero recuperar mi contraseña si la olvido.
**Criterios de aceptación**:  
- Envía enlace de restablecimiento al correo.  
- Si el correo no existe, muestra "Cuenta no registrada".  

### HU-04: Como estudiante quiero editar mi perfil (teléfono, foto) para mantener datos actualizados.
**Criterios de aceptación**:  
- Guarda cambios y muestra confirmación.  
- Teléfonos inválidos muestran error de formato.  

### HU-05: Como administrador quiero desactivar cuentas por mal uso.
**Criterios de aceptación**:  
- Cuenta desactivada no puede iniciar sesión.  
- Intentos de acceso muestran "Cuenta suspendida".  

### HU-06: Como estudiante quiero cerrar sesión para proteger mi privacidad.
**Criterios de aceptación**:  
- Sesión finalizada y redirige a login.  
- Muestra error si hay problemas de red.  

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2

### HU-07: Como estudiante quiero filtrar salas por fecha y hora para ver disponibilidad.
**Criterios de aceptación**:  
- Muestra salas libres en horario seleccionado.  
- Si no hay salas, muestra "No disponible".  

### HU-08: Como estudiante quiero buscar salas por capacidad (ej: 4 personas).
**Criterios de aceptación**:  
- Lista salas con capacidad igual/mayor.  
- Muestra sugerencias si no hay exactas.  

### HU-09: Como estudiante quiero ver equipamiento (proyector, pizarra) de cada sala.
**Criterios de aceptación**:  
- Muestra iconos descriptivos por sala.  
- Sala sin equipos muestra leyenda "Básica".  

### HU-10: Como estudiante quiero ver calendario semanal de disponibilidad.
**Criterios de aceptación**:  
- Muestra bloques horarios coloreados (rojo/verde).  
- Periodos no disponibles aparecen sombreados.  

### HU-11: Como administrador quiero agregar nuevas salas al sistema.
**Criterios de aceptación**:  
- Nueva sala aparece en búsquedas.  
- Nombres duplicados muestran error.  

### HU-12: Como estudiante quiero recibir alertas de salas liberadas.
**Criterios de aceptación**:  
- Envía notificación push si se libera sala.  
- No envía notificaciones fuera de horario.  

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3

### HU-13: Como estudiante quiero reservar una sala disponible.
**Criterios de aceptación**:  
- Envía correo con código QR de confirmación.  
- Si alguien reserva primero, muestra "Ocupado".  

### HU-14: Como estudiante quiero ver mis reservas activas.
**Criterios de aceptación**:  
- Lista reservas futuras con detalles.  
- Sin reservas muestra "No tienes reservas".  

### HU-15: Como estudiante quiero cancelar reservas con 24h de anticipación.
**Criterios de aceptación**:  
- Libera sala y envía confirmación.  
- Cancelaciones tardías muestran "No permitido".  

### HU-16: Como estudiante quiero modificar horario de reserva existente.
**Criterios de aceptación**:  
- Actualiza reserva si nuevo horario libre.  
- Si conflicto, sugiere alternativas.  

### HU-17: Como administrador quiero generar reportes de uso mensual.
**Criterios de aceptación**:  
- Descarga CSV con datos de ocupación.  
- Sin datos muestra "No hay registros".  

### HU-18: Como sistema quiero bloquear reservas fuera de horario biblioteca.
**Criterios de aceptación**:  
- Rechaza reservas de 22:00 a 07:00.  
- Muestra "Fuera de horario de servicio".