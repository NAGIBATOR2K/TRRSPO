FROM ubuntu:22.04

# Обновление и зависимости
RUN apt update && apt install -y libc6

# Копируем deb пакет
COPY maxfinder.deb /tmp/

# Установка пакета
RUN dpkg -i /tmp/maxfinder.deb

# Команда запуска
CMD ["maxfinder"]
