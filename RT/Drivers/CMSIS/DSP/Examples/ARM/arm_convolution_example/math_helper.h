??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -        
 *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 3   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .        
 *        
 *   $ D a t e :                 1 7 .   J a n u a r y   2 0 1 3      
 *   $ R e v i s i o n :   	 V 1 . 4 . 0        
 *      
 *   P r o j e c t :   	         C M S I S   D S P   L i b r a r y    
 *  
 *   T i t l e : 	         m a t h _ h e l p e r . h  
 *    
 *   D e s c r i p t i o n : 	 P r o t o t y p e s   o f   a l l   h e l p e r   f u n c t i o n s   r e q u i r e d .      
 *  
 *   T a r g e t   P r o c e s s o r :   C o r t e x - M 4 / C o r t e x - M 3  
 *      
 *   R e d i s t r i b u t i o n   a n d   u s e   i n   s o u r c e   a n d   b i n a r y   f o r m s ,   w i t h   o r   w i t h o u t    
 *   m o d i f i c a t i o n ,   a r e   p e r m i t t e d   p r o v i d e d   t h a t   t h e   f o l l o w i n g   c o n d i t i o n s  
 *   a r e   m e t :  
 *       -   R e d i s t r i b u t i o n s   o f   s o u r c e   c o d e   m u s t   r e t a i n   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r .  
 *       -   R e d i s t r i b u t i o n s   i n   b i n a r y   f o r m   m u s t   r e p r o d u c e   t h e   a b o v e   c o p y r i g h t  
 *           n o t i c e ,   t h i s   l i s t   o f   c o n d i t i o n s   a n d   t h e   f o l l o w i n g   d i s c l a i m e r   i n  
 *           t h e   d o c u m e n t a t i o n   a n d / o r   o t h e r   m a t e r i a l s   p r o v i d e d   w i t h   t h e    
 *           d i s t r i b u t i o n .  
 *       -   N e i t h e r   t h e   n a m e   o f   A R M   L I M I T E D   n o r   t h e   n a m e s   o f   i t s   c o n t r i b u t o r s  
 *           m a y   b e   u s e d   t o   e n d o r s e   o r   p r o m o t e   p r o d u c t s   d e r i v e d   f r o m   t h i s  
 *           s o f t w a r e   w i t h o u t   s p e c i f i c   p r i o r   w r i t t e n   p e r m i s s i o n .  
 *  
 *   T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   T H E   C O P Y R I G H T   H O L D E R S   A N D   C O N T R I B U T O R S  
 *   " A S   I S "   A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T  
 *   L I M I T E D   T O ,   T H E   I M P L I E D   W A R R A N T I E S   O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S  
 *   F O R   A   P A R T I C U L A R   P U R P O S E   A R E   D I S C L A I M E D .   I N   N O   E V E N T   S H A L L   T H E    
 *   C O P Y R I G H T   O W N E R   O R   C O N T R I B U T O R S   B E   L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,  
 *   I N C I D E N T A L ,   S P E C I A L ,   E X E M P L A R Y ,   O R   C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,  
 *   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T   O F   S U B S T I T U T E   G O O D S   O R   S E R V I C E S ;  
 *   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S ;   O R   B U S I N E S S   I N T E R R U P T I O N )   H O W E V E R  
 *   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N   C O N T R A C T ,   S T R I C T  
 *   L I A B I L I T Y ,   O R   T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )   A R I S I N G   I N  
 *   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,   E V E N   I F   A D V I S E D   O F   T H E  
 *   P O S S I B I L I T Y   O F   S U C H   D A M A G E .      
 *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 # i f n d e f   M A T H _ H E L P E R _ H  
 # d e f i n e   M A T H _ H E L P E R _ H  
  
 f l o a t   a r m _ s n r _ f 3 2 ( f l o a t   * p R e f ,   f l o a t   * p T e s t ,     u i n t 3 2 _ t   b u f f S i z e ) ;      
 v o i d   a r m _ f l o a t _ t o _ q 1 2 _ 2 0 ( f l o a t   * p I n ,   q 3 1 _ t   *   p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ p r o v i d e _ g u a r d _ b i t s _ q 1 5 ( q 1 5 _ t   * i n p u t _ b u f ,   u i n t 3 2 _ t   b l o c k S i z e ,   u i n t 3 2 _ t   g u a r d _ b i t s ) ;  
 v o i d   a r m _ p r o v i d e _ g u a r d _ b i t s _ q 3 1 ( q 3 1 _ t   * i n p u t _ b u f ,   u i n t 3 2 _ t   b l o c k S i z e ,   u i n t 3 2 _ t   g u a r d _ b i t s ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 1 4 ( f l o a t   * p I n ,   q 1 5 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 2 9 ( f l o a t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 2 8 ( f l o a t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ f l o a t _ t o _ q 3 0 ( f l o a t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 v o i d   a r m _ c l i p _ f 3 2 ( f l o a t   * p I n ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 u i n t 3 2 _ t   a r m _ c a l c _ g u a r d _ b i t s ( u i n t 3 2 _ t   n u m _ a d d s ) ;  
 v o i d   a r m _ a p p l y _ g u a r d _ b i t s   ( f l o a t 3 2 _ t   *   p I n ,   u i n t 3 2 _ t   n u m S a m p l e s ,   u i n t 3 2 _ t   g u a r d _ b i t s ) ;  
 u i n t 3 2 _ t   a r m _ c o m p a r e _ f i x e d _ q 1 5 ( q 1 5 _ t   * p I n ,   q 1 5 _ t   *   p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 u i n t 3 2 _ t   a r m _ c o m p a r e _ f i x e d _ q 3 1 ( q 3 1 _ t   * p I n ,   q 3 1 _ t   * p O u t ,   u i n t 3 2 _ t   n u m S a m p l e s ) ;  
 u i n t 3 2 _ t   a r m _ c a l c _ 2 p o w ( u i n t 3 2 _ t   g u a r d _ b i t s ) ;  
 # e n d i f  
  