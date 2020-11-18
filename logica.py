def sleep_in(weekday, vacation):
    """
    :param weekday: bool è un giorno lavorativo o no
    :param vacation: bool siamo in vacanze o no
    :return: bool implicazione (che é vera quando l'antecedente è falso o il conseguente è vero)
    """
    return not weekday or vacation


def near_hundred(n):
    """
    :param n: int numero
    :return: bool che verifica se 90 <= numero <= 110 o se 190 <= numero <= 210
    """
    return abs(100-n) <= 10 or abs(200-n) <= 10


def pos_neg(a, b, negative):
    """
    :param a: int numero a
    :param b: int numero b
    :param negative: bool per indicare
    :return: bool che verifica se entrambi i numeri sono negativi (negative true) o se solo uno di loro è negativo
    (negative false)
    """
    if negative:
        return a < 0 and b < 0
    return (a < 0 and b > 0) or (a > 0 and b < 0)


def caught_speeding(speed, is_birthday):
    """
    :param speed: int velocità
    :param is_birthday: bool se è il tuo compleanno o no
    :return: numero intero tra 0 e 2
    """
    extra_speed = 0
    if is_birthday:
        extra_speed = 5
    if speed <= 60+extra_speed:
        return 0
    elif speed <= 80+extra_speed:
        return 1
    return 2


def sorta_sum(a, b):
    """
    :param a: int numero a
    :param b: int numero b
    :return: int 20 se la somma è compresa tra 10 e 19, altrimente la somma tra a e b
    """
    s = a + b
    if 10 <= s <= 19:
        return 20
    return s


def in1to10(n, outside_mode):
    """
    :param n: int numero n
    :param outside_mode: bool se dobbiamo considerare i numeri inferiori/uguali a 1 o superiori/uguali a 10 o no
    :return: bool che verifica se il numero é compreso nel range [1, 10] o il contrario (con 1 e 10 inclusi),
    dipendendo del valore della variabile outside_mode
    """
    if outside_mode:
        return n <= 1 or n >= 10
    return 1 <= n <= 10


def alarm_clock(day, vacation):
    """
    :param day: int giorno della settimana iniziando da 0 [domenica] fino a 6 [sabato]
    :param vacation: bool siamo in vacanze o no
    :return: string orario della sveglia
    """
    if vacation:
        if 1 <= day <= 5:
            return '10:00'
        return 'off'
    if 1 <= day <= 5:
        return '7:00'
    return '10:00'


def cigar_party(cigars, is_weekend):
    """
    :param cigars: int numeri dei sigari
    :param is_weekend: bool se siamo nel weekened o no
    :return: bool vero sempre quando abbiamo un numero di sigari maggiore di 40, ma falso se il numero di sigari
    supera i 60 quando non siamo nel weekend
    """
    return 40 <= cigars <= 60 or (is_weekend and cigars > 60)


def make_bricks(small, big, goal):
    """
    :param small: int numero di mattoni piccoli di 1 metro
    :param big: int numero di mattoni piccoli di 5 metri
    :param goal: int lunghezza in metri del muro da costruire
    :return: bool che verifica se i mattoni che abbiamo alla nostra disposizione sono quelli giusti
    """
    # Tot_big riceve il totale di metri disponibili solo con i mattoni grandi
    tot_big = big*5
    if (tot_big == goal) or (small == goal) or (tot_big + small == goal):
        return True
    elif tot_big < goal:
        return tot_big + small >= goal
    # tot_big > goal
    # Possiamo ridure i mattoni superflui usando la divisione per intero. Big adesso rappresenta solo i mattoni
    # necessari
    big = goal // 5
    tot_big = big*5
    # Adesso sappiamo che o tot_big = goal o tot_big < goal
    return tot_big + small >= goal


def lone_sum(a, b, c):
    """
    :param a: int numero a
    :param b: int numero b
    :param c: int numero c
    :return: int somma tra a, b e c (dipende dai valori di a, b e c)
    """
    if a != b and b != c and a != c:
        return a + b + c
    elif a != b and b == c:
        return a
    elif a != b and a == c:
        return b
    elif a == b and a != c:
        return c
    return 0


def lucky_sum(a, b, c):
    """
    :param a: int numero a
    :param b: int numero b
    :param c: int numero c
    :return: int somma tra a, b e c (dipende se uno tra a, b, c == 13)
    """
    if a == 13:
        return 0
    elif b == 13:
        return a
    elif c == 13:
        return a + b
    return a + b + c


def close_far(a, b, c):
    """
    :param a: int numero a
    :param b: int numero b
    :param c: int numero c
    :return: bool che verifica se b_close xor c_close e se b dista di almeno 2 da c
    """
    # b_close e c_close servono per verificare se b e c distano al più 1 da a
    b_close = abs(b-a) <= 1
    c_close = abs(c-a) <= 1
    return (b_close or c_close) and not(b_close and c_close) and (abs(b - c) >= 2)


def make_chocolate(small, big, goal):
    """
    :param small: int numero di barre di cioccolato piccole di 1 metro
    :param big: int numero di barre di cioccolato grandi di 5 metri
    :param goal: int peso in kg della barra di cioccolato da confezionare
    :return: Ritorniamo il numero esatto di barre piccole per arrivare al nostro goal o -1 se questo non è possibile
    """
    # Tot_big riceve il totale di kg disponibili solo con le barre di cioccolato grandi
    tot_big = big*5
    if tot_big < goal:
        # Se tot_big < goal, abbiamo bisogno delle barre piccole per arrivare al goal
        # Dobbiamo verificare se il numero di barre piccole è abbastanza grande da coprire i kg che mancano per
        # arrivare al nostro goal
        if small >= goal - tot_big:
            return goal - tot_big
        return -1
    # Se tot_big è uguale al goal, non ci servono le barre piccole
    elif tot_big == goal:
        return 0
    # Se tot_big > goal, goal % 5 restituisce il numero di barre piccole necessarie (mentre goal // 5 restituisce
    # il numero di barre grandi necessarie, ma in questo caso non serve).
    if goal % 5 <= small:
        return goal % 5
    return -1