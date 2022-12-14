??; / *   F i l e :   s t a r t u p _ a r m v 6 - m . s  
 ;   *   P u r p o s e :   s t a r t u p   f i l e   f o r   a r m v 7 - m   a r c h i t e c t u r e   d e v i c e s .  
 ;   *                     S h o u l d   b e   u s e d   w i t h   A R M C C  
 ;   *   V e r s i o n :   V 2 . 0 0  
 ;   *   D a t e :   1 6   N o v e m b e r   2 0 1 5  
 ;   *  
 ;   * /  
 ; / *   C o p y r i g h t   ( c )   2 0 1 1   -   2 0 1 4   A R M   L I M I T E D  
 ;  
 ;       A l l   r i g h t s   r e s e r v e d .  
 ;       R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t  
 ;       m o d i f i c a t i o n ,   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s   a r e   m e t :  
 ;       -   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t  
 ;           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
 ;       -   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t  
 ;           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n   t h e  
 ;           d o c u m e n t a t i o n   a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e   d i s t r i b u t i o n .  
 ;       -   N e i t h e r   t h e   n a m e   o f   A R M   n o r   t h e   n a m e s   o f   i t s   c o n t r i b u t o r s   m a y   b e   u s e d  
 ;           t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s   d e r i v e d   f r o m   t h i s   s o f t w a r e   w i t h o u t  
 ;           s p e c i f i c   p r i o r   w r i t t e n   p e r m i s s i o n .  
 ;       *  
 ;       T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S   " A S   I S "  
 ;       A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T   L I M I T E D   T O ,   T H E  
 ;       I M P L I E D   W A R R A N T I E S   O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S   F O R   A   P A R T I C U L A R   P U R P O S E  
 ;       A R E   D I S C L A I M E D .   I N   N O   E V E N T   S H A L L   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S   B E  
 ;       L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,   I N C I D E N T A L ,   S P E C I A L ,   E X E M P L A R Y ,   O R  
 ;       C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T   O F  
 ;       S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S  
 ;       I N T E R R U P T I O N )   H O W E V E R   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N  
 ;       C O N T R A C T ,   S T R I C T   L I A B I L I T Y ,   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )  
 ;       A R I S I N G   I N   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E  
 ;       P O S S I B I L I T Y   O F   S U C H   D A M A G E .  
 ;       - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 ; / *  
 ;     / / - - - - - - - -   < < <   U s e   C o n f i g u r a t i o n   W i z a r d   i n   C o n t e x t   M e n u   > > >   - - - - - - - - - - - - - - - - - -  
 ; * /  
  
  
 ;   < h >   S t a c k   C o n f i g u r a t i o n  
 ;       < o >   S t a c k   S i z e   ( i n   B y t e s )   < 0 x 0 - 0 x F F F F F F F F : 8 >  
 ;   < / h >  
  
 S t a c k _ S i z e             E Q U           0 x 0 0 0 0 0 4 0 0  
  
                                 A R E A         S T A C K ,   N O I N I T ,   R E A D W R I T E ,   A L I G N = 3  
 S t a c k _ M e m               S P A C E       S t a c k _ S i z e  
 _ _ i n i t i a l _ s p  
  
  
 ;   < h >   H e a p   C o n f i g u r a t i o n  
 ;       < o >     H e a p   S i z e   ( i n   B y t e s )   < 0 x 0 - 0 x F F F F F F F F : 8 >  
 ;   < / h >  
  
 H e a p _ S i z e               E Q U           0 x 0 0 0 0 0 C 0 0  
  
                                 A R E A         H E A P ,   N O I N I T ,   R E A D W R I T E ,   A L I G N = 3  
 _ _ h e a p _ b a s e  
 H e a p _ M e m                 S P A C E       H e a p _ S i z e  
 _ _ h e a p _ l i m i t  
  
  
                                 P R E S E R V E 8  
                                 T H U M B  
  
  
 ;   V e c t o r   T a b l e   M a p p e d   t o   A d d r e s s   0   a t   R e s e t  
  
                                 A R E A         R E S E T ,   D A T A ,   R E A D O N L Y  
                                 E X P O R T     _ _ V e c t o r s  
                                 E X P O R T     _ _ V e c t o r s _ E n d  
                                 E X P O R T     _ _ V e c t o r s _ S i z e  
  
 _ _ V e c t o r s               D C D           _ _ i n i t i a l _ s p                             ;   T o p   o f   S t a c k  
                                 D C D           R e s e t _ H a n d l e r                           ;   R e s e t   H a n d l e r  
                                 D C D           N M I _ H a n d l e r                               ;   N M I   H a n d l e r  
                                 D C D           H a r d F a u l t _ H a n d l e r                   ;   H a r d   F a u l t   H a n d l e r  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           S V C _ H a n d l e r                               ;   S V C a l l   H a n d l e r  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           0                                                   ;   R e s e r v e d  
                                 D C D           P e n d S V _ H a n d l e r                         ;   P e n d S V   H a n d l e r  
                                 D C D           S y s T i c k _ H a n d l e r                       ;   S y s T i c k   H a n d l e r  
 _ _ V e c t o r s _ E n d  
  
 _ _ V e c t o r s _ S i z e     E Q U           _ _ V e c t o r s _ E n d   -   _ _ V e c t o r s  
  
                                 A R E A         | . t e x t | ,   C O D E ,   R E A D O N L Y  
  
  
 ;   R e s e t   H a n d l e r  
  
 R e s e t _ H a n d l e r       P R O C  
                                 E X P O R T     R e s e t _ H a n d l e r                           [ W E A K ]  
                                 I M P O R T     S y s t e m I n i t  
                                 I M P O R T     _ _ m a i n  
                                 L D R           R 0 ,   = S y s t e m I n i t  
                                 B L X           R 0  
                                 L D R           R 0 ,   = _ _ m a i n  
                                 B X             R 0  
                                 E N D P  
  
  
 ;   D u m m y   E x c e p t i o n   H a n d l e r s   ( i n f i n i t e   l o o p s   w h i c h   c a n   b e   m o d i f i e d )  
  
 N M I _ H a n d l e r           P R O C  
                                 E X P O R T     N M I _ H a n d l e r                               [ W E A K ]  
                                 B K P T   # 0  
                                 B               .  
                                 E N D P  
 H a r d F a u l t _ H a n d l e r \  
                                 P R O C  
                                 E X P O R T     H a r d F a u l t _ H a n d l e r                   [ W E A K ]  
                                 B K P T   # 0  
                                 B               .  
                                 E N D P  
 S V C _ H a n d l e r           P R O C  
                                 E X P O R T     S V C _ H a n d l e r                               [ W E A K ]  
                                 B               .  
                                 E N D P  
 P e n d S V _ H a n d l e r     P R O C  
                                 E X P O R T     P e n d S V _ H a n d l e r                         [ W E A K ]  
                                 B               .  
                                 E N D P  
 S y s T i c k _ H a n d l e r   P R O C  
                                 E X P O R T     S y s T i c k _ H a n d l e r                       [ W E A K ]  
                                 B               .  
                                 E N D P  
  
                                 A L I G N  
  
 ;   U s e r   I n i t i a l   S t a c k   &   H e a p  
                                 I F             : D E F : _ _ M I C R O L I B  
  
                                 E X P O R T     _ _ i n i t i a l _ s p  
                                 E X P O R T     _ _ h e a p _ b a s e  
                                 E X P O R T     _ _ h e a p _ l i m i t  
  
                                 E L S E  
  
                                 I M P O R T     _ _ u s e _ t w o _ r e g i o n _ m e m o r y  
  
 ; / *  
 ;     _ _ u s e r _ s e t u p _ s t a c k h e a p ( )   r e t u r n s   t h e :  
 ;           -   h e a p   b a s e   i n   r 0   ( i f   t h e   p r o g r a m   u s e s   t h e   h e a p )  
 ;           -   s t a c k   b a s e   i n   s p  
 ;           -   h e a p   l i m i t   i n   r 2   ( i f   t h e   p r o g r a m   u s e s   t h e   h e a p   a n d   u s e s   t w o - r e g i o n   m e m o r y ) .  
 ;   * /  
                                 E X P O R T     _ _ u s e r _ s e t u p _ s t a c k h e a p  
  
 _ _ u s e r _ s e t u p _ s t a c k h e a p   P R O C  
                                 L D R           R 0 ,   =   _ _ i n i t i a l _ s p  
                                 M O V           S P ,   R 0  
 	 	 	 	 I F   H e a p _ S i z e   >   0  
                                 L D R           R 2 ,   =   _ _ h e a p _ l i m i t  
                                 L D R           R 0 ,   =   _ _ h e a p _ b a s e  
 	 	 	 	 E L S E  
                                 M O V           R 0 ,   # 0  
                                 M O V           R 2 ,   # 0  
                                 E N D I F  
                                 B X             L R  
                                 E N D P  
  
  
 ; / *  
 ; _ _ u s e r _ i n i t i a l _ s t a c k h e a p ( )   r e t u r n s   t h e :  
 ;       -   h e a p   b a s e   i n   r 0  
 ;       -   s t a c k   b a s e   i n   r 1 ,   t h a t   i s ,   t h e   h i g h e s t   a d d r e s s   i n   t h e   s t a c k   r e g i o n  
 ;       -   h e a p   l i m i t   i n   r 2  
 ;       -   s t a c k   l i m i t   i n   r 3 ,   t h a t   i s ,   t h e   l o w e s t   a d d r e s s   i n   t h e   s t a c k   r e g i o n .  
 ;   * /  
 ;  
 ; / *   D E P R I C A T E D  
 ;                                 E X P O R T     _ _ u s e r _ i n i t i a l _ s t a c k h e a p  
 ;  
 ; _ _ u s e r _ i n i t i a l _ s t a c k h e a p   P R O C  
 ;                                 L D R           R 0 ,   =     H e a p _ M e m  
 ;                                 L D R           R 1 ,   = ( S t a c k _ M e m   +   S t a c k _ S i z e )  
 ;                                 L D R           R 2 ,   =   ( H e a p _ M e m   +     H e a p _ S i z e )  
 ;                                 L D R           R 3 ,   =   S t a c k _ M e m  
 ;                                 B X             L R  
 ;                                 E N D P  
 ;   * /  
  
                                 A L I G N  
  
                                 E N D I F  
  
  
                                 E N D  